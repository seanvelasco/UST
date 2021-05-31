#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of students in class: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout << endl << "Enter grades of "<<i+1<<" student: ";
        cin >> arr[i];
    }
    float sum=0;
    int fail=0;
    int high=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(arr[i]<4)
        {
            fail++;
        }
        high = max(arr[i],high);
    }
    cout << endl << "Average score: " << sum << endl;
    cout << endl << "Highest score: " << high << endl;
    cout << endl << "Number of students failed: " << fail << endl;
    if(fail>=10)
    {
        cout << endl <<"The teacher is mad!";
    }
    system("pause");
    return 0;
}