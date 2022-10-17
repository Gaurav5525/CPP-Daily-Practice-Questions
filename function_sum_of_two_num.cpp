//This Program will print sum of TWO Number
#include<iostream>
using namespace std;

void addition(int num1,int num2){
    int sum;
    sum=num1+num2;
    cout<<"Sum of "<<num1<<" and "<<num2<<" is :: "<<sum;
}

int main(){
    int num1,num2;
    cout<<"Enter First Number :: ";
    cin>>num1;
    cout<<"Enter Second Number :: ";
    cin>>num2;

    addition(num1,num2);
    return 0;
}