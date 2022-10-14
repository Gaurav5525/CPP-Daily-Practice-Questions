//This program can find entred number is prime or not
#include<iostream>
using namespace std;

int main(){
	int i,n;
	cout<<"Enter any positive number : ";
	cin>>n;
	
	if(n==1){
		cout<<"\nSmallest prime number ";
	}
	for(i=2;i<n;i++){
		if(n%i==0){
			cout<<"\nThe entered number is not a PRIME Number ";
			break;
		}
	}
	if(n==i){
		cout<<"\nThe entered number is PRIME Number";
	}
	return 0;
}

