#include <iostream>
using namespace std;

int main()
{
    char symbol = 's';
    int side = 6;
    string line = string(side, ' ') + string(side, symbol) + string(side, ' ');
    for(int i = 2*side - 1; i >= 1; i--)
    {
        cout << line.substr(i, side) << endl;
    }
    system("pause");
    return 0;
} 


