// This program can calculate quotient and remainder
#include<iostream>
using namespace std;

int main(){
    int dividend,divisor,quotient,rem;

    cout<<"Enter DIVIDEND :: ";
    cin>>dividend;

    cout<<"Enter DIVISOR :: ";
    cin>>divisor;

    quotient=dividend/divisor;
    rem=dividend%divisor;

    cout<<"For Dividend "<<dividend<<" & Divisor "<<divisor<<" :: "<<endl;
    cout<<"Quotient is :: "<<quotient<<endl;
    cout<<"Remainder is :: "<<rem;
    return 0;
}