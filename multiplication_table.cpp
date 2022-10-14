//This Program can print Multiplication table of ANY Number
#include<iostream>
using namespace std;

int main(){
	int num1,n=10,multiplication;
	
	cout<<"Enter Number of which you want Multiplication Table :: ";
	cin>>num1;
	
	cout<<'\n'<<"Multiplication Table of "<<num1<<" is --> "<<endl;
	
	
	for(int i=1;i<=n;i++){
		multiplication=num1*i;
		cout<<multiplication<<endl;
	}
	return 0;
}