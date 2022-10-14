// This Program will print Factorial of Given Number 
#include<iostream>
using namespace std;

int main(){
    int num,fact=1;
    cout<<"Enter Number :: ";
    cin>>num;

    for(int i=1;num>1;i++){
        fact=fact*num;
        num=num-1;
    }
    cout<<"Factorial is "<<fact;
    return 0;
}