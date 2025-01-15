clear
close all
clc

%load data_2_1.out
% time x_c y_c a circ r

load data3.out
data_2_1 = data3;

%%

figure
plot(data_2_1(1:end-1,1), abs((data_2_1(1:end-1,3)-data_2_1(2:end,3))), '*' ,LineWidth=1.5)
grid on
xlabel("Time [s]", "FontSize", 12);
ylabel("Centroids distance", "FontSize", 12)