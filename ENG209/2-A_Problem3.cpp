#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    char choice;
    double x, y, z;
    float a, b, c;
    cout << "DO YOU WANT TO COMPUTE FOR?" << endl;
    cout << "1. X" << endl << "2. Y" << endl << "3. Z" << endl;
    cout << "ENTER YOUR COICE: ";
    cin >> choice;
    cout << "Enter value for 'a':  ";
    cin >> a;
    cout << "Enter value for 'b':  ";
    cin >> b;
    cout << "Enter value for 'c':  ";
    cin >> c;
    switch(choice)
    {
        case '1':
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
            x = (sqrt(pow(2.71828,a) + 2*b*c))/(2*a);
            x = round(x*1000.0)/1000.0;
            cout << "X = " << x;
            break;
        case '2':
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
            y = (a)*(b - log(a/c));
            y = round(y*1000.0)/1000.0;
            cout << "Y = " << y;
            break;
        case '3':
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
            z = pow((a*(3*a + c)/(2*b)), 0.75);
            z = round(z*1000.0)/1000.0;
            cout << "Z = " << z;
            break;
        case 'x':
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
            x = (sqrt(pow(2.71828,a) + 2*b*c))/(2*a);
            x = round(x*1000.0)/1000.0;
            cout << "X = " << x;
            break;
        case 'y':
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
            y = (a)*(b - log(a/c));
            y = round(y*1000.0)/1000.0;
            cout << "Y = " << y;
            break;
        case 'z':
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
            z = pow((a*(3*a + c)/(2*b)), 0.75);
            z = round(z*1000.0)/1000.0;
            cout << "Z = " << z;
            break;
    }
    system("pause");
    return 0;
}