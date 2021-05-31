#include<iostream>
using namespace std;

int Addition(double num1,double num2)
    {
        int output;
        output = num1+num2;
        return output;
    }

int substraction(double num1,double num2)
    {
        int output;
        output = num1-num2;
        return output;
    }

int multiplication(double num1,double num2)
    {
        int output;
        output = num1*num2;
        return output;
    }

int division(double num1,double num2)
    {
        int output;
        output = num1-num2;
        return output;
    }

int main()
{
    char choice;
    double num1,num2;
    cout << "Choose an operator: +, -, *, or /\n";
    cin >> choice;
    cout << "Enter Two Numbers as input : \n";
    cin >> num1 >> num2;
    switch(choice)
    {
        case '+':
        cout<<"Sum of two numbers are: "<< Addition(num1,num2) << endl;
        break;

        case '-':division(num1,num2);
        cout<<"Substraction of two numbers are: " << substraction(num1,num2) << endl;
        break;
        
        case '*':
        cout << "Multiplication of two numbers are: " <<  multiplication(num1,num2) << endl;
       
        break;
        
        case '/':
        cout << "Division of two numbers are: " << division(num1,num2) << endl;
        break;
        
        default:
        cout<<"Invalid Operator";
    }
    system("pause");
    return 0;
}

