//This Program can find the is binery or not
#include<iostream>
using namespace std;

int main(){
	int a,num;
	cout<<"Enter the NUMBER : \n";
	cin>>num;
	
	while(num>0){
		a=num%10;
		if(a!=1 && a!=0){
			cout<<"Number is NOT Binery \n";
			break;
		}
		else{
			cout<<"Number is Binery \n";
			break;
		}
		
	}
return 0;
}
