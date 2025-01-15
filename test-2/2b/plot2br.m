clc; clear; close all;

% time x_c y_c a circ r
load Case_2_2_circ_0.5/data.out

t_10 = data(:,1);
xc_10 = data(:,2);
yc_10 = data(:,3);
a_10 = data(:,4);
circ_10 = data(:,5);
r_10 = data(:,6);
r_c10 = (xc_10.^2+yc_10.^2).^0.5;

%%
% time x_c y_c a circ r
load Case_2_2_circ_0.25/data.out

t_100 = data(:,1);
xc_100 = data(:,2);
yc_100 = data(:,3);
a_100 = data(:,4);
circ_100 = data(:,5);
r_100 = data(:,6);
r_c100 = (xc_100.^2+yc_100.^2).^0.5;

%%
% time x_c y_c a circ r
load Case_2_2_circ_0.75/data.out

t_1000 = data(:,1);
xc_1000 = data(:,2);
yc_1000 = data(:,3);
a_1000 = data(:,4);
circ_1000 = data(:,5);
r_1000 = data(:,6);
r_c1000 = (xc_1000.^2+yc_1000.^2).^0.5;

%%
% time x_c y_c a circ r
load Case_2_2_circ_0.125/data.out

t_10000 = data(:,1);
xc_10000 = data(:,2);
yc_10000 = data(:,3);
a_10000 = data(:,4);
circ_10000 = data(:,5);
r_10000 = data(:,6);
r_c10000 = (xc_10000.^2+yc_10000.^2).^0.5;

%%
% time x_c y_c a circ r
load Case_2_2_circ_1/data.out

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
tiledlayout(2,1, "Padding","tight");
nexttile;

plot(linspace(0,20, length(r_100000)), r_100000, '.-', LineWidth=1.5) % 1
hold on


%plot(linspace(0,20, length(r_1000)), r_1000, '.-', LineWidth=1.5) % 0.75


plot(linspace(0,20, length(r_10)), r_10, '.-', LineWidth=1.5) % 0.5


plot(linspace(0,20, length(r_100)), r_100, '.-', LineWidth=1.5) %0.25


plot(linspace(0,20, length(r_10000)), r_10000, '.-', LineWidth=1.5) % 0.125


hold off
%plot(tt, aa(tt), 'k--', LineWidth=1.0)
legend("$\Gamma_2 = 1$", "$\Gamma_2 = 0.5$", "$\Gamma_2 = 0.25$", "$\Gamma_2 = 0.125$", FontSize=12)
xlabel("Time [s]", FontSize=12)
ylabel("$\| argmax \{ \omega (x,y)(t) \} \|$", FontSize=12)

grid on

%%
% distanza da 0 come se fosse simmetrico in funzione del rapporto tra le
% circolazioni
nexttile
% rapporto circolazioni
rapp = [1 2 4 8];
% distanza da uno a regime
dist = [0.00828641 0.0911505 0.23916 0.349309];
plot(rapp, dist, 'k^', LineWidth=1.5)
hold on
plot(rapp, dist, 'k-', LineWidth=0.5)
xline(rapp, 'k:')
yline(dist, 'k:')
xlabel("$\Gamma_1 / \Gamma_2$", FontSize=12)
ylabel("$ d_0 - d_i $", FontSize=12)
xlim([-1 9])
ylim([ -0.1 0.45])
