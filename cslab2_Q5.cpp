#include <iostream>
#include<math.h>

using namespace std;

int main() 
{
    float no, rs, pw;
    
    cout<<"\nProgram to find power of any number x ^ y"	;
    cout<<"\nEnter the number:";
    cin>>no;
    cout<<"\nEnter the power to which it is to be raised:";
    cin>>pw;
    rs=pow(no,pw);
    cout<<"\nThe result of "<<no<<" ^ "<<pw<<" is :"<<rs;
    	
	return 0;
}
