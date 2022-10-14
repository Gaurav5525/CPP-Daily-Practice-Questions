// This Program can Calculate Simple Interest
#include<iostream>
using namespace std;

int main(){
    float p,r,t,finalAmt;

    cout<<"Enter INITIAL PRINCIPLE AMT :: ";
    cin>>p;
    cout<<"Enter the RATE OF INTEREST :: ";
    cin>>r;
    cout<<"Enter TIME(in year) :: ";
    cin>>t;

    finalAmt=(p*r*t)/100;
    cout<<"Simple interest for the amount "<<p<<" for "<<t<<" Year @ %"<<r<<" is "<<finalAmt;
    return 0;
}