#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    float side, area, s, y;
    cout<<"\nProgram to calculate area of an equilateral triangle."	;
    cout<<"\nEnter the measure of the side of the triangle:";
    s=1.5*side;           //calculating semi - perimeter
    y=s*(pow((s-side),3));
    area=sqrt(y);
 /* using Heron's formula
    that says            area^2=s*(s-side)*(s-side)*(s-side)     */
    
    cout<<"\nThe area of the equilateral triangle with side "<<side<<" is :";
    cout<<area;
	return 0;
}
