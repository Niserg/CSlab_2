#include <iostream>
using namespace std;

int main() 
{
    int dys, yr, wk, dy;
    
    cout<<"\nProgram to convert days into years, weeks and days.";
    cout<<"\nEnter the number of days to be converted:";
    cin>>dys;
    yr=dys/365;
    dys=dys%365;
    wk=dys/7;
    dy=dys%7;
    cout<<"\nThe number of days you gave can be equivalently written as:\n";
    cout<<yr<<" years, "<<wk<<" weeks and "<<dy<<" days.";
	return 0;
}
