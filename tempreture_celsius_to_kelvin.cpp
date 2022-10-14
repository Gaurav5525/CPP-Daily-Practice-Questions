// This program can convert tempreture in °C into kelvins
#include<iostream>
using namespace std;

int main(){
    float temp;

    cout<<"Enter Tempreture in celsius :: ";
    cin>>temp;

    cout<<"Tepreture in Kelvin is :: "<<temp+273.15;
    return 0;
}