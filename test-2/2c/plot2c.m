clc; clear
clear all
% This script changes all interpreters from tex to latex. 
list_factory = fieldnames(get(groot,'factory'));
index_interpreter = find(contains(list_factory,'Interpreter'));
for i = 1:length(index_interpreter)
    default_name = strrep(list_factory{index_interpreter(i)},'factory','default');
    set(groot, default_name,'latex');
end
%%

% time x_c y_c a circ r
load 02/data.out

t_10 = data(:,1);
xc_10 = data(:,2);
yc_10 = data(:,3);
a_10 = data(:,4);
circ_10 = data(:,5);
r_10 = data(:,6);
r_c10 = (xc_10.^2+yc_10.^2).^0.5;

%%
% time x_c y_c a circ r
load 04/data.out

t_100 = data(:,1);
xc_100 = data(:,2);
yc_100 = data(:,3);
a_100 = data(:,4);
circ_100 = data(:,5);
r_100 = data(:,6);
r_c100 = (xc_100.^2+yc_100.^2).^0.5;

%%
% time x_c y_c a circ r
load 08/data.out

t_1000 = data(:,1);
xc_1000 = data(:,2);
yc_1000 = data(:,3);
a_1000 = data(:,4);
circ_1000 = data(:,5);
r_1000 = data(:,6);
r_c1000 = (xc_1000.^2+yc_1000.^2).^0.5;

%%
% time x_c y_c a circ r
load 16/data.out

t_10000 = data(:,1);
xc_10000 = data(:,2);
yc_10000 = data(:,3);
a_10000 = data(:,4);
circ_10000 = data(:,5);
r_10000 = data(:,6);
r_c10000 = (xc_10000.^2+yc_10000.^2).^0.5;

%%
%aa = @(t)	sqrt( 0.201^2 + 4/1000*t );
tt = linspace(0,20);
tiledlayout(1,1, "Padding","tight");
nexttile;

plot(linspace(0,20, length(r_10)), r_10, '.-', LineWidth=1.5) % 0.2
hold on

plot(linspace(0,20, length(r_100)), r_100, '.-', LineWidth=1.5) %0.4
plot(linspace(0,20, length(r_1000)), r_1000, '.-', LineWidth=1.5) %0.8
plot(linspace(0,20, length(r_10000)), r_10000, '.-', LineWidth=1.5) % 1.6

%plot(tt, aa(tt), 'k--', LineWidth=1.0)
legend("$a_2(0) = 0.2$", "$a_2(0) = 0.4$", "$a_2(0) = 0.8$", "$a_2(0) = 1.6$", FontSize=12)
xlabel("Time [s]", FontSize=12)
ylabel("$\| argmax \{ \omega (x,y)(t) \} \|$", FontSize=12)

grid on

% %%
% % distanza da 0 come se fosse simmetrico in funzione del rapporto tra le
% % circolazioni
% nexttile
% % rapporto circolazioni
% rapp = [1 2 4 8];
% % distanza da uno a regime
% dist = [0.00828641 0.0832774 0.096312 0.314993];
% plot(rapp, dist, 'k^', LineWidth=1.5)
% hold on
% plot(rapp, dist, 'k-', LineWidth=0.5)
% xline(rapp, 'k:')
% yline(dist, 'k:')
% xlabel("$a_1(0) / a_2(0)$", FontSize=12)
% ylabel("$ d_0 - d_i $", FontSize=12)
% xlim([-1 9])
% ylim([ -0.1 0.45])

%%
R12=1;
a0 = 0.4
plot(t_10000, 0.5*R12*t_10000./t_10000, '--')
plot(t_10000, sqrt( a0^2 + 4/500*t_10000 ), '--')

a0 = 0.2
plot(t_10000, 0.5*R12*t_10000./t_10000, '--')
plot(t_10000, sqrt( a0^2 + 4/500*t_10000 ), 'k--')

a0 = 0.8
plot(t_10000, 0.5*R12*t_10000./t_10000)
plot(t_10000, sqrt( a0^2 + 4/500*t_10000 ))

a0 = 1.6
plot(t_10000, 0.5*R12*t_10000./t_10000)
plot(t_10000, sqrt( a0^2 + 4/500*t_10000 ))


hold off