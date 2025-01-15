# 0 "NS2D-cpp.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/u/sw/toolchains/gcc-glibc/11.2.0/prefix/include/stdc-predef.h" 1 3
# 0 "<command-line>" 2
# 1 "NS2D-cpp.c"
@if _XOPEN_SOURCE < 700
  @undef _XOPEN_SOURCE
  @define _XOPEN_SOURCE 700
@endif
@if 1
@include <stdint.h>
@include <string.h>
@include <fenv.h>
@endif


# 1 "/root/mnt/basilisk/src/common.h" 1
# 1 "/root/mnt/basilisk/src/ast/std/stdlib.h" 1
@include <stdlib.h>
# 2 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/stdio.h" 1
@include <stdio.h>
# 3 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/stddef.h" 1
@include <stddef.h>
# 4 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/stdbool.h" 1
@include <stdbool.h>
# 5 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/stdarg.h" 1
@include <stdarg.h>
# 6 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/string.h" 1
@include <string.h>
# 7 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/float.h" 1
@include <float.h>
# 8 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/limits.h" 1
@include <limits.h>
# 9 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/math.h" 1
@include <math.h>
# 10 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/time.h" 1
@include <time.h>
# 11 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/sys/time.h" 1
@include <sys/time.h>
# 12 "/root/mnt/basilisk/src/common.h" 2
# 1 "/root/mnt/basilisk/src/ast/std/sys/resource.h" 1
@include <sys/resource.h>
# 13 "/root/mnt/basilisk/src/common.h" 2

@if _OPENMP
@ include <omp.h>
@ define OMP(x) Pragma(#x)
@elif _MPI

@ define OMP(x)

@ include <mpi.h>
static int mpi_rank, mpi_npe;
@ define tid() mpi_rank
@ define pid() mpi_rank
@ define npe() mpi_npe

@else

@ define OMP(x)

@endif
# 46 "/root/mnt/basilisk/src/common.h"
@undef HUGE
@define HUGE ((double)1e30)

@define _NVARMAX 65536
@define is_constant(v) ((v).i >= _NVARMAX)
@define constant(v) (is_constant(v) ? _constant[(v).i - _NVARMAX] : HUGE)

@define max(a,b) ((a) > (b) ? (a) : (b))
@define min(a,b) ((a) < (b) ? (a) : (b))
@define sq(x) ((x)*(x))
@define cube(x) ((x)*(x)*(x))
@define sign(x) ((x) > 0 ? 1 : -1)
@define noise() (1. - 2.*rand()/(double)RAND_MAX)
@define clamp(x,a,b) ((x) < (a) ? (a) : (x) > (b) ? (b) : (x))

@define unmap(x,y)

@define trash(x)


@define systderr stderr
@define systdout stdout

@if _MPI
FILE * qstderr (void);
FILE * qstdout (void);
FILE * ferr = NULL, * fout = NULL;
@ def not_mpi_compatible()
do {
  if (npe() > 1) {
    fprintf (ferr, "%s() is not compatible with MPI (yet)\n", __func__);
    exit (1);
  }
} while(0)
@
@ define system(command) (pid() == 0 ? system(command) : 0)
@else
@ define qstderr() stderr
@ define qstdout() stdout
@ define ferr stderr
@ define fout stdout
@ define not_mpi_compatible()
@endif



static inline void qassert (const char * file, int line, const char * cond) {
  fprintf (ferr, "%s:%d: Assertion `%s' failed.\n", file, line, cond);
  abort();
}
# 104 "/root/mnt/basilisk/src/common.h"
@define sysmalloc malloc
@define syscalloc calloc
@define sysrealloc realloc
@define sysfree free
@define systrdup strdup

@if MTRACE

struct {
  FILE * fp;
  size_t total, max;
  size_t overhead, maxoverhead;
  size_t nr;
  size_t startrss, maxrss;
  char * fname;
} pmtrace;

typedef struct {
  char * func, * file;
  size_t max, total;
  int line, id;
} pmfunc;

typedef struct {
  size_t id, size;
} pmdata;

static pmfunc * pmfuncs = NULL;
static int pmfuncn = 0;

static int pmfunc_index (const char * func, const char * file, int line)
{
  pmfunc * p = pmfuncs;
  for (int i = 0; i < pmfuncn; i++, p++)
    if (p->line == line && !strcmp(func, p->func) && !strcmp(file, p->file))
      return p->id;
  pmfuncn++;
  pmfuncs = (pmfunc *) sysrealloc (pmfuncs, pmfuncn*sizeof(pmfunc));
  p = &pmfuncs[pmfuncn - 1];
  memset (p, 0, sizeof(pmfunc));
  p->func = systrdup(func);
  p->file = systrdup(file);
  p->line = line;
  p->id = pmfuncn;
  if