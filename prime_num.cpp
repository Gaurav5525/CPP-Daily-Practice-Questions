//This program can find entred number is prime or not
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter ANY Number to whether it is PRIME Number or NOT :: ";
    cin>>num;

    if(num%2==0){
        cout<<"Number is PRIME";
    }
    else{
        cout<<"Number is NOT PRIME";
    }
    return 0;

}