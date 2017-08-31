#include <iostream>
using namespace std;

int main() {
	float c,f;
	cout<<"\nProgram to convert temperature from fahrenheit to degree celsius.";
	cout<<"\nEnter value of temperature in fahrenheit:";
	cin>>f;
	c=(5/9)*(f-32);
	cout<<"\nThe value in degree celsius is:"<<c;
	
	return 0;
}
