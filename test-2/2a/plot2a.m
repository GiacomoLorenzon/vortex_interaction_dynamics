clc; clear; close all;
set(groot,'defaulttextinterpreter','latex');  
set(groot, 'defaultAxesTickLabelInterpreter','latex');  
set(groot, 'defaultLegendInterpreter','latex');

% time x_c y_c a circ r
load Case_2_1_R_10/data.out

t_10 = data(:,1);
xc_10 = data(:,2);
yc_10 = data(:,3);
a_10 = data(:,4);
circ_10 = data(:,5);
r_10 = data(:,6);

%%
% time x_c y_c a circ r
load Case_2_1_R_100/data.out

t_100 = data(:,1);
xc_100 = data(:,2);
yc_100 = data(:,3);
a_100 = data(:,4);
circ_100 = data(:,5);
r_100 = data(:,6);

%%
% time x_c y_c a circ r
load Case_2_1_R_1000/data.out

t_1000 = data(:,1);
xc_1000 = data(:,2);
yc_1000 = data(:,3);
a_1000 = data(:,4);
circ_1000 = data(:,5);
r_1000 = data(:,6);

%%
% time x_c y_c a circ r
load Case_2_1_R_10000/data.out

t_10000 = data(:,1);
xc_10000 = data(:,2);
yc_10000 = data(:,3);
a_10000 = data(:,4);
circ_10000 = data(:,5);
r_10000 = data(:,6);

%%
% time x_c y_c a circ r
load Case_2_1_R_100000/data.out

t_100000 = data(:,1);
xc_100000 = data(:,2);
yc_100000 = data(:,3);
a_100000 = data(:,4);
circ_100000 = data(:,5);
r_100000 = data(:,6);
r_c100000 = (xc_100000.^2+yc_100000.^2).^0.5;

%%
%aa = @(t)	sqrt( 0.201^2 + 4/1000*t );
tt = linspace(0,20);

plot(linspace(0,20, length(r_100)), r_100, '-', LineWidth=1.5)
hold on
plot(linspace(0,20, length(r_1000)), r_1000, '-', LineWidth=1.5)
plot(linspace(0,60, length(r_10000)), r_10000, '-', LineWidth=1.5)
plot(linspace(0,60, length(r_100000)), r_100000, '-', LineWidth=1.5)
hold off
%plot(tt, aa(tt), 'k--', LineWidth=1.0)
legend("$Re=10^2$","$Re=10^3$", "$Re=10^4$", "$Re=10^5$", FontSize=12)
xlabel("Time [s]", FontSize=12)
ylabel("$\| x_1(t) \|$", FontSize=12)

grid on



