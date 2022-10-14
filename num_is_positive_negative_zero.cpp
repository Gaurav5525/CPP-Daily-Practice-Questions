//This Program check whether number is Positive, Negative or zero
#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter Any Number to check whether number is Positive, Negative or zero :: ";
    cin>>num;

    if(num>0){
        cout<<"Number is POSITIVE";
    }
    else if(num==0){
        cout<<"Number is ZERO";
    }
    else{
        cout<<"Number is Negative";
    }
    return 0;
}