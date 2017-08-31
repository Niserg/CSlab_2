#include <iostream>

using namespace std;

int main()
{
    float si, r, p, t;
    cout<<"\nProgram to calculate simple interest."	;
    cout<<"\nEnter the principle amount :";
    cin>>p;
    cout<<"\nEnter rate of interest (in percentage ie 2 and not 0.02):";
    cin>>r;
    cout<<"\nEnter time (in years):";
    cin>>t;

    si=(p*t*r)/100;
    cout<<"\nThe simple interest on given principal for given time at given rate is:";
    cout<<si;

	return 0;
}
