#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3;
    cout<<"\nProgram to calculate third angle of a triangle given the two angles.";
    cout<<"\nEnter measure of an angle of your triangle in degree:";
    cin>>a1;
    cout<<"\nEnter the measure of second angle of the triangle in degree:";
    cin>>a2;
    a3=180-a1-a2;
    cout<<"\nThe measure of the third angle is :"<<a3<<" degree";

	return 0;
}
