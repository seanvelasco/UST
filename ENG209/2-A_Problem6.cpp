#include <iostream>
using namespace std;

int main()
{
    string value;
    int x = 7;
    value = (x == 6) ? "A match is found.": "A match was found.";
    cout << value;
    system("pause");
    return 0;
}