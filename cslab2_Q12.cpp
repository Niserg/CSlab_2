#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	float t, p, r, ci;
	cout<<"\nProgram to enter P, T, R and calculate Compound Interest.";
	cout<<"\nEnter the principle amount:";
	cin>>p;
	cout<<"\nEnter the rate of interest( in percentage ie 2 instead of 0.02):";
	cin>>r;

	r=r/100;

	cout<<"\nEnter the time( in years):";
	cin>>t;

	ci=p*(pow(1+r,t));

	cout<<"\nThe compound interest is :"<<ci;

	return 0;
}
