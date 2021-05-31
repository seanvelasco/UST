#include <iostream>
#include <cmath>
using namespace std;

double Solver(double a, double b, double c, double d, double e, double f)
    {  
        double D;
        D = sqrt((pow((b-a), 2)) + (pow((d-c), 2)) + (pow((f-e), 2)));
        return D;
    }

int main()
{
    double a, b, c, d, e, f, D;

    cout << "Enter 6 values to determine Euclidean distance." << endl;
    cout << "Enter x1: ";
    cin >> a;
    cout << "Enter x2: ";
    cin >> b;
    cout << "Enter y1: ";
    cin >> c;
    cout << "Enter y2: ";
    cin >> d;
    cout << "Enter z1: ";
    cin >> e;
    cout << "Enter z2: ";
    cin >> f;

    cout << "The answer is " << Solver(a, b, c, d, e, f);;
    system("pause");
    return 0;
}