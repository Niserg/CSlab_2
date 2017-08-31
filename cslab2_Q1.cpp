#include <iostream>
using namespace std;

int main() 
{
	float cm, m, km;
	
	cout<<"Enter the length in centimeter:";
	cin>>cm;
	m=cm/100;
	km=m/1000;
	cout<<"\nThe value in meter is:"<<m<<"\nThe value in kilometer is:"<<km;
	
	return 0;
}
