#include <iostream>
using namespace std;

int main() 
{
	float phmk, chmk, mtmk, csmk, enmk, avmk, tmk, per;
	
	cout<<"\nProgram to calculate total, average and percentage.";
	
	cout<<"\nEnter your subject-wise maeks (out of 100) of 5 subjects:";
	cout<<"\nPhysics marks :";
	cin>>phmk;
	cout<<"\nChemistry marks :";
	cin>>chmk;
	cout<<"\nMathematics marks :";
	cin>>mtmk;
	cout<<"\nComputer Science marks :";
	cin>>csmk;
	cout<<"\nEnglish marks :";
	cin>>enmk;
	
	tmk=phmk+chmk+mtmk+csmk+enmk;
	avmk=tmk/5;
	per=(tmk/500)*100;
	
	cout<<"\nYour total marks are :"<<tmk;
	cout<<"\nYour average marks are :"<<avmk;
	cout<<"\nYou have "<<per<<" of marks out of 500";
	
	return 0;
}
