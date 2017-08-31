#include <iostream>
using namespace std;

int main() {
	
	float c, f;
        cout<<"\nProgram to  convert temperature from celsius to fahrenheit scale."; 
	cout<<"\nEnter value of temperature in celsius:";
	cin>>c;
	f=(9/5)*c+32;
	cout<<"\nThe value in fahrenheit is:"<<f;
	
	return 0;
}
