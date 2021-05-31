#include <iostream>
using namespace std;

int main()
{
    int X[100],i,odd[100],even[100],j,k,temp,m;
    int count=0;
    for(i=0;i<100;i++)
    {
        X[i]=rand()%1000 + 0;
    }
    cout<<"The array elements are\n\n";
    for(i=0;i<100;i++)
    {
        cout<<X[i]<<" ";
        count++;
        if(count%10==0)
        {
            cout<<"\n";
        }
    }
    j=0;
    k=0;
    for(i=0;i<100;i++)
    {
        if(X[i]%2==0)
        {
            even[j]=X[i];
            j++;
        }
        else
        {
            odd[k]=X[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        for(m=0;m<j-i-1;m++)
        {
            if(even[m]>even[m+1])
            {
                temp=even[m];
                even[m]=even[m+1];
                even[m+1]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(m=0;m<k-i-1;m++)
        {
            if(odd[m]>odd[m+1])
            {
                temp=odd[m];
                odd[m]=odd[m+1];
                odd[m+1]=temp;
            }
        }
    }
    for(i=0;i<j;i++)
    {
        for(i=j;i<100;i++)
        {
            X[i]=odd[k-1];
            k--;
        }
        count=0;
        cout<<"\nThe sorted array elements are\n\n";
        for(i=0;i<100;i++)
        {
            cout<<X[i]<<" ";
            count++;
        if(count%10==0)
        {
            cout<<"\n";
        }
        }
    }
    system("pause");
    return 0;
}