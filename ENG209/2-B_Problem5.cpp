#include <iostream>
using namespace std;

int main()
{
    int time;
    int x = 1;       
    int call, sms;
    cout << "Enter number of clients: ";
    cin >> time;                       
    
    while(time--)
    {
        cout << endl << "Enter call and text message history of clients." << endl << endl;
        cout << "Enter the duration of the call: ";
        cin >> call;
        cout << "Enter number of text messages sent: ";
        cin >> sms;             
        float bill1 = 100.00, bill2;   
        if(call > 5 && call <= 15)
        {       
            bill1 += (call-5)*8;                     
        }
        else if(call>15 && call<=30)
        {       
            bill1 += (80.00+(call-15)*6.00);
        }
        else if(call>30)
        {       
            bill1 += (80.00+(15*6.00)+(call-30)*1.50);
        }
        bill2 = sms*1.00;      
        cout << endl << "Bill of Client " << x++ << " is P" << bill1+bill2 << endl;
    }
    system("pause");
    return 0;
}