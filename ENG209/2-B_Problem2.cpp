#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, num = 0;
    float sum = 0, ave;
    int count = 0;
    cout << "How many test scores?" << endl;
    cin >> num;
    float scores[num] = {};
   
    cout << "Enter test scores" << endl;
    for(k = 0; k < num ; k++)
    {
        cout << "Enter score: ";
        cin >> scores[k];
    }
    
     n = sizeof(scores) / sizeof(scores[0]);
        
    for (i = 0; i < n; i++)
    {
        sum += scores[i];
        ave = sum/n;
    }
    
    for(i = 1;i < n; i++)
    {
       if(scores[0] < scores[i])
       {
           scores[0] = scores[i];
       }
    }

    for(j = 0; j < n+1; j++)
    {
        if(scores[j] < ave)
        {
           count++;
        }
    }

    cout << "Average mark is: " << ave << endl;
    cout << "Highest mark is: " <<  scores[0] << endl;
    cout << "Number of marks less than the average: " << count << endl;
    cin >> count;
    return 0;
    system("pause");
}