//This program will calculate the sum of array
#include<iostream>
using namespace std;

int sum(int arr[],int n);  //Function decleration

int main(){
	int n=5;
    int marks[5]={20,25,30,14,54};

	sum(marks,n);   //Function Calling
    return 0;
}

int sum(int arr[],int n){   //Function Defination
	int total=0;
	for(int i=0;i<n;i++){
		total=total+arr[i];
	}
	cout<<total;
    return 0;
}