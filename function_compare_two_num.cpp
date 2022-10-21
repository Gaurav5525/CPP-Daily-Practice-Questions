#include <iostream>
using namespace std;

int max_two(int a, int b){
	int maxi;
	if (a>b)
	maxi=a;
	else
	maxi=b;
	return maxi;
}

int main(){
	
	int num1,num2,max;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	
	max=max_two(num1,num2);
	cout<<"The Maximum Number Between "<<num1 <<" and "<<num2<<" is: "<<max<<endl;

	return 0;
}