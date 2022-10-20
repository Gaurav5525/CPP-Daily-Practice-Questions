//This Program will calculate the LCM of two Num
#include <iostream>
using namespace std;

int lcmNum(int num1,int num2)
{
	int a=num1;
	int b=num2;
    int lcm;
	
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a; 
		}
	}
	
	lcm=(num1*num2)/a;
	
	cout<<endl<<"LCM OF "<<num1<<" & "<<num2<<" is :: "<<lcm<<endl;
    return 0;
}

int main(){
	int num1,num2;
	cout<<"Enter the FIRST Number :: ";
	cin>>num1;
	cout<<endl<<"Enter the SECOND Number :: ";
	cin>>num2;
	
    lcmNum(num1,num2);
	return 0;
}	                         