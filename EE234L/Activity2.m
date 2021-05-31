clear;
clc;

FN = "Sean Velasco"
SN = 2019129183
AT = "Activity 2"

%% Exercise 1

fprintf("\nExercise 1\n\n")

student_id = [2 0 1 9 1 2 9 1 8 3];

% 0 is even in the sense that when 0 ÷ 2, the quotient is an integer.
% Octave acknowledges the above-mentioned property.

fprintf("Student number is %d.\n", SN)

even = 0:2:9;

EVEN = intersect(student_id, even);

S = sum(EVEN);

fprintf("Elements of the row vector EVEN: %s\n", sprintf('%d ', EVEN))
fprintf("The sum of the elements of EVEN is %d.\n\n", S)

%% Exercise 2 

fprintf("Exercise 2\n\n")

A = [11 23 56 93; 1611 423 4 12; 1940 34 5 92; 234 23 42 68]

% (row,column)

B = [A(1,1) A(3,1); A(2,3) A(2,1)];

fprintf("2x2 matrix from the elements of matrix A with indices (1,1), (2,3), (3,1), and (2,1):\n\n");
disp(B);

%% Exercise 3

fprintf("\nExercise 3\n\n")

M = magic(5)
Max_M = max(M(:));
Min_M = min(M(:));
M(5,5) = 2019129183;

% To avoid outputting zeros when calling matrix M
format long g

fprintf("Maximum value of matrix M is %d \n", Max_M)
fprintf("Minimum value of matrix M is %d \n", Min_M)
fprintf("Matrix M with student_id as the last element:\n\n")
disp(M)
