// This program can calculate the volume of a sphere
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float rad,vol;
    cout<<"Enter radius of Sphere :: ";
    cin>>rad;

    vol=(4*M_PI*(pow(rad,3)))/3;
    cout<<"for radius :: "<<rad<<" the Volume of sphere is :: "<<vol;
    return 0;
}