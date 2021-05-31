clear;
clc;

FN = "Sean Velasco"
SN = "2019129183"
AT = "Preliminary Exam"

%% Question 6

subplot (2,2,1)
hold on
grid on
% Variables 
t_stamp = 0:0.01:10;
t = 0:0.01:10;
x = 0;
v = 13; % v = 13; looks the as the graph in questionaire
theta = 75;
z = (x + (v*sind(theta))*t);
% Plot
plot(t_stamp, z, 'b', 'LineWidth',1.5)
xlim([0 10])
ylim([0 150])
yticks(0:50:150);
set(gca, 'Xtick', 0:5:10);
% Labels
title("x(t) vs. t")
legend("x(t) = x(0) + [(vi)(sin(θ))]t") 
xlabel('Time (s)')
ylabel('Horizontal Distance (m)')
hold off

subplot (2,2, 2)
hold on
grid on
% Variables 
t_stamp = 0:0.01:10;
t = 0:0.01:10;
x = 0;
y = 0;
v = 50.75;
theta = 75;
g = 9.8;
z = -0.5*g*(t.^2) + (v*sind(theta))*t;
% Plot
plot(t_stamp, z, 'b', 'LineWidth',1.5)
xlim([0 10])
ylim([0 150])
yticks(0:50:150);
set(gca, 'Xtick', 0:5:10);
% Labels
title("y(t) vs. t")
legend("y(t) = -0.5gt^2 + [(vi)(sin(θ))]t") 
xlabel('Time (s)')
ylabel('Altitude (m)')
hold off

