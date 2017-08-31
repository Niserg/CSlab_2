#include <iostream>
#include<math.h>
using namespace std;

int main() 
{   float no, rt;
    
    cout<<"\nProgram to enter any number and calculate its square root.";
    cout<<"\nEnter the number whose square root you want to find:";
    cin>>no;
    if(no>=0) rt=sqrt(no);
    else cout<<"\ndon't input negative numbers.";
    cout<<"\nThe square root of "<<no<<" is :"<<rt;
	return 0;
}
