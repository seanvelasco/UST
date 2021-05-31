#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char operation;
    cout << "Enter two integers to be computed." << endl << endl;
    cout << "First integer: ";
    cin >> a;
    cout << "Second integer: ";
    cin >> b;
    cout << endl << "What operation to perform?" << endl << endl;
    cout << "(1) Addition" << endl << "(2) Subtraction" << endl << "(3) Multiplication" << endl << "(4) Division" << endl << endl;
    cin >> operation;
    switch(operation)
    {
        case '1':
            cout << endl << a << " + " << b << " = " << a+b << endl;
            break;
        case '2':
            cout << endl << a << " - " << b << " = " << a-b << endl;
            break;
        case '3':
            cout << endl << a << " * " << b << " = " << a*b << endl;
            break;
        case '4':
            if(b==0)
            {
                cout << endl << a << " ÷ " << b << " is undefined. " << endl;
            }
            else
            {
                cout << endl << a << " / " << b << " = " << a/b << endl;

            }
            break;
    }
    system("pause");
    return 0;
}