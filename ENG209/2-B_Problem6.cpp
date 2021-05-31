#include <iostream>
using namespace std;

int main()
{
    double a=1;
    double b=1;
    double i,c;
    cout << a << endl << b << endl;
    for(i=0;i<98;i++)
    {
    c = a + b;
    cout << c << endl;
    a = b;
    b = c;
    }
    system("pause");
    return 0;
}