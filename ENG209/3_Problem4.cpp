#include <iostream>
using namespace std;

int main()
{
    string strs[10];
    for(int i=0; i<10; i++)
    {
        cout << "Enter Name "<< i+1 << ": ";
        getline(cin, strs[i]);        
    }
    cout << "Names that start with letter 'A'" << endl;
    for(int i=0; i<10; i++)
    {
        if(strs[i].length() > 0 && strs[i].length() <= 30 && strs[i][0] == 'A')
        {
            cout << strs[i] << ", length: " << strs[i].length() << endl;
        }
    }
    system("pause");
    return 0;
}