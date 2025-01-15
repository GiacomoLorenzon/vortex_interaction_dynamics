/**
# Merging of two vortices
Incompressible 2D Navier-Stokes equations using a
vorticity--streamfunction formulation. */

#include "streamdiff.h"

/**
The domain is centered on $(0,0)$. 
If the maximum level of refinement is 9, 
the initial grid has $N=2^9=512$ grid points per dimension. */

#define MAXLEVEL 9
double Reynolds = 1000.;    // Reynolds based on Gamma1
double D0 = 1.;             // Distance btw vortices  (reference)
double dom_size = 6;        // Domain size
double Gamma1 = 1;          // Vortex 1 : circulation (reference)
double a1 = 0.2;            // Vortex 1 : core size
double Gamma2 = 0.75;          // Vortex 2 : circulation
double a2 = 0.2;            // Vortex 2 : core size
double t_final = 20;        // Final simulation time
double rho = 1;             // Density                (reference)
double omega_min, omega_max;// Min and max levels for colorbar
                            // (can be adjusted below)

int main() {
  mu = rho*Gamma1/Reynolds;
  omega_max = 0.5*Gamma1/(pi*sq(a1));
  omega_min = 0;            // set to 0 (monopoles) or to -omega_max (dipole)
  L0 = dom_size;
  origin (-L0/2., -L0/2.);
  size(L0);
  init_grid (1 << MAXLEVEL);
//  TOLERANCE = 1e-7;
  run();
}

/**
The initial vorticity field is composed of Gaussian vortices:
beware that the sq() function returns the square of the bracket.
*/

event init (i = 0)
{
 foreach() 
    // Case 1:
    // omega[] = Gamma1/(pi*sq(a1))*exp(-(sq(x) + sq(y))/sq(a1));
    
    // Case 2a:
     omega[] = Gamma1/(pi*sq(a1))*exp(-(sq(x + D0/2) + sq(y))/sq(a1))
       + Gamma2/(pi*sq(a2))*exp(-(sq(x - D0/2) + sq(y))/sq(a2));
}

/**
Statistics on the vorticity field
(centroid location, dispersion radius, circulation): 
*/

event logfile(t += 0.2; t <= t_final)
{
  double sumx = 0., sumy = 0., sum2 = 0., circ = 0.;

  double maxi = -HUGE;
  double r = 0.;
  double xcagafuori = 0.;
  double ycagafuori = 0.;

  foreach (reduction(+
                     : sumx) reduction(+
                                       : sumy) reduction(+
                                                         : circ))
  {
    circ += dv() * omega[];
    sumx += dv() * x * omega[];
    sumy += dv() * y * omega[];

    if (fabs(omega[]) > maxi)
    {
      maxi = fabs(omega[]);
      xcagafuori = x;
      ycagafuori = y;
    }
  }
  static FILE *fp = fopen("data.out", "w");
  fprintf(stderr, "> t=%10.5lf    i=%d    dt=%10.5lf\n", t, i, dt);

  if (circ > 1e-4 || circ < -1e-4)
  { //    Case with nonzero circulation
    sumx = sumx / circ;
    sumy = sumy / circ;
    foreach (reduction(+
                       : sum2))
    {
      sum2 += dv() * (sq(x - sumx) + sq(y - sumy)) * omega[];
    }
    sum2 = sum2 / circ;
    sum2 = sqrt(sum2);

    r = xcagafuori * xcagafuori + ycagafuori * ycagafuori;
    r = sqrt(r);

    fprintf(stderr,
            "  xc=%10.5lf    yc=%10.5lf    a=%10.5lf    circ=%12.5lf\n",
            sumx, sumy, sum2, circ);
    if (t == 0)
      fprintf(fp, "time x_c y_c a circ r\n");
    fprintf(fp, "%g %g %g %g %g %g\n",
            t, sumx, sumy, sum2, circ, r);
  }
  else
  { //    Case with zero circulation
    fprintf(stderr, "  circ=%12.5lf\n", circ);
    if (t == 0)
      fprintf(fp, "time circ\n");
    fprintf(fp, "%g %g\n", t, circ);
  }
}

/**
Movie output:
*/

event movie (t += 0.2) {
  scalar omega[];
  vorticity (u, omega);
  // Vorticity
  output_ppm (omega, linear = true, file = "vort.mp4", map = cool_warm,
              min = omega_min, max = omega_max, n = 512);

  // Discretization level
  foreach()
    omega[] = level;
  output_ppm (omega, spread = 2, file = "level.mp4", n=512);

  // Velocity
  foreach()
    omega[] = sqrt(sq(u.x[]) + sq(u.y[]));
  output_ppm (omega, linear = true, file = "velo.mp4", 
              map = gray, n = 512);
}

/**
Mesh adaptation based on wavelet error control on $\omega$:
*/

#if TREE
event adapt (i++) {
  adapt_wavelet ({omega}, (double[]){1e-2}, MAXLEVEL ); 
                               //, list = {omega, psi});
}
#endif

