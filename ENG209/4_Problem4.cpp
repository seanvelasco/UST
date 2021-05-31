#include <iostream>
using namespace std;

void BubbleSort(int values[], int numValues)
    {
       int i, j;
       int temp;
       for (i = 0; i < numValues - 1; i++)
       {
           for (j = 0; j < numValues - i - 1; j++)
           {
                if (values[j] > values[j + 1])
                    {
                        temp = values[j];
                        values[j] = values[j+1];
                        values[j+1] = temp;
               }
           }    
       }
   }

void printArray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    cout<<endl;
    }

}

int main()
{
    int size;
    int *arr;
    cout << "Enter size: ";
    cin >> size;
    arr=new int[size];
    cout << "Enter " << size << " elements: " << endl;
    for(int i=0;i<size;i++)
    {
        cin>> arr[i];
    }
    cout << "Orignal Array: " << endl;
    printArray(arr,size);
    BubbleSort(arr,size);
    cout << "Sorted Array: "<< endl;
    printArray(arr,size);
    system("pause");
    return 0;
}