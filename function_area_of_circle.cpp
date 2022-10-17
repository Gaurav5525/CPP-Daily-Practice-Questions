//This Program can calculate AREA of Circle 
#include<iostream>
#include<cmath>
using namespace std;

void area(float); //Function Decleration

int main(){
    float radius;
    cout<<"Enter the Radius of CIRCLE :: ";
    cin>>radius;

    area(radius);  //Function Calling 
    return 0;
}

void area(float radius){   //Function Defination
    float a;
    a=M_PI*pow(radius,2);
    cout<<"Area of CIRCLE is :: "<<a<<" mm";
}