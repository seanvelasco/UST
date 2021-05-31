#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout << "Enter lengths of a triangle to determine whether it is a right triangle or not." << endl << endl;;
    cout << "Enter first side: ";
    cin >> side1;
    cout << "Enter second side: ";
    cin >> side2;
    cout << "Enter last side: ";
    cin >> side3;
    if((side1*side1+side2*side2==side3*side3)||(side1*side1+side3*side3==side2*side2)||(side3*side3+side2*side2==side1*side1))
    {
        cout << endl << "The triangle is a right triangle." << endl;
    }
    else
    {
        cout << endl << "The triangle is not a right triangle." << endl;
    }
    system("pause");
    return 0;
}