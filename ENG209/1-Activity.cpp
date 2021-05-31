#include<iostream>
using namespace std;

int main()
{
    int length=0, width=0;
    cout << "Draw rectable using custom length and width." << endl;
    cout << endl;
    cout << "Enter the length:  ";
    cin >> length;
    cout << "Enter the width:  ";
    cin >> width;
    double cwidth = width/2, clength = length/2;
    cout << " " << endl;
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<width; j++)
        {
            if(i==0 || i==length-1 || j==0 || j==width-1)
            {       
                cout << "*";
            }
            else if((length%2 != 0 && width%2 != 0) && (i==clength && j == cwidth))
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        }
    cout << endl;
    system("pause");
    return 0;
}