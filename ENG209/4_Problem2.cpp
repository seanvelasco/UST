#include <iostream>
#include <cmath>
using namespace std;

void Solver(float v0)
{
    float t,s,v;
    cout<< "Time(s)\t\tdisplacement(ft)\tvelocity(ft/s)" << endl;
    for(t=0; t<2.1; t+=0.2)
    {
    s = (v0*t)-(0.5*32.2*(pow(t,2)));
    v = v0-(32.2*t); 
    cout << t << "\t\t" << s << "\t\t\t" << v <<endl; 
    }
}

int main()
{
    float v0;
    cout << "Enter the initial velocity V0: ";
    cin >> v0; 
    Solver(v0);
    system("pause");
    return 0;
}