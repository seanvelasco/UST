#include <iostream>
using namespace std;

int main()
{
    int n = 0, count, arr[50], i = 0, j, input;
    char x[50];

    cout << "How many numbers? ";
    cin >> n;
    cout << "Enter " << n << " integers: " << endl;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << endl << "N\tCount" << endl;

    for(i = 0; i < n; i++)
    {
        count = 1;
        while(arr[i] == arr[i + 1] && i < n)
        {
            count++;
            i++;
        }
        cout << arr[i] << "\t" << count << endl;
    }
    system("pause");
    return 0;
}