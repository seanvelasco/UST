#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for(i = 1; i <= 12; i++)
    {
        for(j = 1; j <= 12; j++)
        {
            cout << "\t" << i*j;
        }
    cout << endl;
    }
    system("pause");
    return 0;
}