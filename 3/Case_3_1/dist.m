clear
close all
clc

load data3.out

a0 = 0.2;
R12 = 1.0;

figure
plot(data3(:,1), data3(:,3), '-' ,LineWidth=1.5)
grid on
xlabel("Time [s]", "FontSize", 12);
ylabel("Centroids distance", "FontSize", 12)

%%

a0 = 0.2;
R12 = 1.0;

figure
plot(data3(:,1), data3(:,3), '-' ,LineWidth=1.5)
hold on
plot(data3(:,1), 0.5*R12*data3(:,1)./data3(:,1), 'k--')
plot(data3(:,1), sqrt( a0^2 + 4/500*data3(:,1) ), 'k--')
grid on
xlabel("Time [s]", "FontSize", 12);
ylabel("Centroids distance", "FontSize", 12)

