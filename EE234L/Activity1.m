clear;
clc;

FN = "Sean Velasco"
SN = "2019129183"
AT = "Activity 1"

%% Exercise 1

% Resistors in parallel

R1 = 14;
R2 = 18;
R3 = 11;
R4 = 3;

fprintf("\nResistance in resistors in parallel are %d Ohms, %d Ohms, %d Ohms, and %d Ohms.\n", R1, R2, R3, R4);


RT = 1/(1/R1 + 1/R2 + 1/R3 + 1/R4);

fprintf("The equivalent resistance of the circuit is %.4f Ohms.\n", RT);

%% Exercise 2

% Applied voltage and given resistance

V1 = 26;
R1 = 9;
R2 = 14;
R3 = 14;
R4 = 1;

fprintf("\nVoltage applied to the circuit is %.f V.\n", V1);
fprintf("Resistors in the circuit have the following values: %d Ohms, %d Ohms, %d Ohms, and %d Ohm.\n", R1, R2, R3, R4);

RT = R1 + (1/(1/R2 + 1/R3 + 1/R4));

% Ohm's Law

IT = V1/RT;

fprintf ("The total current across the circuit is %.4f A.\n", IT);