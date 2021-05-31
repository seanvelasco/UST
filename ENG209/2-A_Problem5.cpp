#include <iostream>
using namespace std;

int main()
{
    string value;
    double x = 9.8;
    value = (x > 10) ? "x is greater than 10": "x is less than 10";
    cout << "x = " << x << endl << value;
    return 0;
    system("pause");
}