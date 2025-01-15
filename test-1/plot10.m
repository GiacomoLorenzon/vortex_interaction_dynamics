clc; clear; close all;

load data_1.txt

% time x_c y_c a circ r

t = data_1(:,1);
xc = data_1(:,2);
yc = data_1(:,3);
a = data_1(:,4);
circ = data_1(:,5);

%%
aa = @(t)	sqrt( 0.201^2 + 4/1000*t );
tt = linspace(0,20);

hold on
plot(a, 'r^', LineWidth=1.5)
plot(tt, aa(tt), 'k--', LineWidth=1.0)
legend("Numerical value", "$a(t) = \sqrt{a^2(0) + 4 \nu t}$", FontSize=12)
xlabel("Time [s]", FontSize=12)
ylabel("$a(t)$", FontSize=12)

grid on

