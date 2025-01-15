clc; clear; close all;

%load Case_2_2_circ_0.5/data.out
load data.out


% time x_c y_c a circ r

t = data(:,1);
xc = data(:,2);
yc = data(:,3);
a = data(:,4);
circ = data(:,5);

%%
mu = 1 * (1+0.125)/2 / 1000
aa = @(t)	sqrt( 0.2^2 + 4*mu*t );
tt = linspace(0,100,500);
%tt = linspace(0,20,101);

hold on
plot(tt, a, 'r^', LineWidth=1.5)
plot(tt, aa(tt), 'k--', LineWidth=1.0)
legend("Numerical value", "$a(t) = \sqrt{a^2(0) + 4 \nu t}$", FontSize=12)
xlabel("Time [s]", FontSize=12)
ylabel("$a(t)$", FontSize=12)

grid on

%%
a_sper = aa(tt);
dist = a_sper(:)-a(:) 
figure
plot(dist)
