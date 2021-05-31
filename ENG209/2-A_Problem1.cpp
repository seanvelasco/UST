#include <iostream>
using namespace std;

int main()
{
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int day, month, year;
    int leap = 0;

    cout << endl << "Enter Month : ";
    cin >> month;
    cout << endl << "Enter day: ";
    cin >> day;
    cout << endl << "Enter year : ";
    cin >> year;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        leap=1;
    }    
  
    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31))
    {
        cout << endl << months[month-1] << " " << day << ", " <<year << endl;
    }
    else if((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30))
    {
       cout << endl << months[month-1] << " " << day << ", " << year << endl;
    }
    else if(month == 2 && leap == 1 && day >= 1 && day <= 29)
    {
        cout << endl << months[month-1] << " " << day << ", " << year << endl;  
    }
    else if(month== 2 && leap == 0 && day >= 1 && day <= 28)
    {
        cout << endl << months[month-1] << " " << day << ", " << year;  
    }
    else
    {
        cout << endl << "Invalid Date." << endl;
    }
    system("pause");
    return main();
}