//This Program can print Multiplication table of ANY Number
#include<iostream>
using namespace std;

int main(){
    int num,temp;

    cout<<"Enter the Number to Print it's Multiplication Table :: ";
    cin>>num;
    temp=num;

    for(int i=1;i<=10;i++){
        cout<<"Table of "<<num<<" x "<<i<<" = "<<temp<<endl; 
        temp=temp+num;
    }
    return 0;
}