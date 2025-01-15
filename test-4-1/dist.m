clear
close all
clc
% time x_c y_c a circ r
load data.out
data3=data;
xx = linspace(0, 100, 100);

figure
plot(xx, interp1(data3(:,1), data3(:,6), xx, "spline"), '-' ,LineWidth=1.5)
grid on
xlabel("Time [s]", "FontSize", 12);
ylabel("Centroids distance", "FontSize", 12)
hold on 
yline(0.505707, 'k--' ,LineWidth=1.5)

% %%
% 
% a0 = 0.2;
% R12 = 1.0;
% 
% figure
% plot(data3(:,1), data3(:,3), '-' ,LineWidth=1.5)
% hold on
% plot(data3(:,1), 0.5*R12*data3(:,1)./data3(:,1), 'k--')
% plot(data3(:,1), sqrt( a0^2 + 4/500*data3(:,1) ), 'k--')
% grid on
% xlabel("Time [s]", "FontSize", 12);
% ylabel("Centroids distance", "FontSize", 12)

