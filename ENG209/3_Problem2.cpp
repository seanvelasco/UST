#include <iostream>
using namespace std;

int main()
{
    int arr[50] =
    {9, 74, 63, 68, 28, 20, 80, 36, 82, 46,
    33, 76, 81, 32, 86, 27, 72, 87, 22, 84,
    83, 6, 95, 66, 96, 47, 92, 24, 8, 99,
    54, 13, 39, 29, 21, 57, 67, 42, 89, 45,
    56, 69, 14, 53, 5, 97, 75, 71, 10, 3};
    cout << "value of first element is " << arr[0] << endl;
    arr[24]=26;
    arr[9]=arr[39]*3 + 10;
    for(int i=0;i<50;i++)
    {
        if(i%2==0 or i%3==0 or i%5==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    system("pause");
    return 0;
}