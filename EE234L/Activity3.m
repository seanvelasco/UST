clear;
clc;

FN = "Sean Velasco"
SN = "2019129183"
AT = "Activity 3"

%% Exercise 1

fprintf("\nExercise 1\n\n")

A= [16 11 22; 4 2 1; 612 32 12]
B=[12 32; 65 12; 34 06]
C=[23 54 24; 8 81 87; 16 11 19]
D=[61 24 6]

disp("3A added to C:")
3*A + C

disp("D multiplied to A:")
D*A

disp("C^3 divived by 4, element-by-element:")
hold on
format bank
C.^3 / 4
hold off

disp("Sum of all the elements of B:")
sum(sum(B.^2))

%% Exercise 2

fprintf("\nExercise 2\n\n")

Measured_I = [3.5246 4.6271 5.123; 6.564 7.546  8.136; 6.231 5.231 4.789];

K_Factors = [1.447 1.0806 0.9955; 0.7921 0.7686 0.6514; 0.9145 1.006 1.1067];

Calibrated_I = Measured_I*K_Factors;

% To compare measured values v. calibrated values
hold on
plot(Measured_I)
plot(Calibrated_I)
hold off

Ave_I = mean(Calibrated_I,2);

fprintf ("Calibrated values stored in Calibrated_I matrix:\n");
disp(Calibrated_I);

fprintf ("\nAverage current readings from Calirated_I matrix are:\n");
fprintf ("%.4f A\n", Ave_I);