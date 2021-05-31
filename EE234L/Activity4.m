clear;
clc;

FN = "Sean Velasco"
SN = "2019129183"
AT = "Activity 4"

%% Exercise 1

figure(1)
hold on
grid on
x = -16:0.01:16;
plot(x, sin (x), 'r', 'LineWidth',1.5)
plot(x, sin (2*x), 'k', 'LineWidth',1.5)
plot(x, sin (3*x), 'g', 'LineWidth',1.5)
set(gca, 'xtick', -16:4:16)
xlim([-16 16])
ylim([-2 2])
title("Graph of Three Sine Waves")
legend("sin(x)","sin(2x)","sin(3x)") 
xlabel('x-axis')
ylabel('y-axis')
hold off

%% Exercise 2

month = ['Jan'; 'Feb'; 'Mar'; 'Apr'; 'May'; 'Jun'];
JAN_AVE = mean([14 22 13 21 22 15 19 20 20 20 16 22 20 22 17 15 19 20 21 21 13 22 13 17 15 15 19 22 16 22]);
FEB_AVE = mean([17 19 19 19 18 14 21 22 21 17 23 14 17 17 19 19 21 21 17 16 14 15 18 20 22 17 17 21 16 23]);
MAR_AVE = mean([22 18 17 24 23 15 19 23 21 23 15 16 23 17 21 15 23 17 17 23 19 16 24 18  21 21 16 22 22 22]);
APR_AVE = mean([24 21 15 16 21 22 16 15 17 15 21 20 17 23 18 21 21 15 24 24 21 19 20 18 15 22 25 24 21 18]);
MAY_AVE = mean([23 23 20 22 21 17 18 21 17 17 21 20 19 18 23 18 17 18 21 19 20 21 21 18 22 22 19 20 24 18]);
JUNE_AVE = mean([20 21 17 23 21 18 17 17 18 21 17 18 23 18 20 22 21 20 20 17 21 19 17 23 19 19 21 22 21 18]);
Ave_Temp = [JAN_AVE ; FEB_AVE ; MAR_AVE; APR_AVE; MAY_AVE ;JUNE_AVE]

figure(2)
hold on
grid on
bar(Ave_Temp, 0.3, 'y');
plot(Ave_Temp, 'r')
set(gca, 'xticklabel', month) 
yticks(0:25);
xlim([0.85 5.15])
ylim([0 25])
title("Average Temperature in Baguio City")
xlabel('Months')
ylabel('Temperature in Degrees Celcius')
hold off