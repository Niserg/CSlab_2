#include <iostream>
using namespace std;

int main() 
{   
	float b, h, ar;
	cout<<"\nProgram to find area of a triangle given its base and height.";
	cout<<"\nEnter the value of base:";
	cin>>b;
	cout<<"\nEnter the value of height (in same unit as base):";
	cin>>h;
	ar=0.5*h*b;
	cout<<"\nThe area of the triangle is :"<<ar<<" square unit";
	
	return 0;
}
