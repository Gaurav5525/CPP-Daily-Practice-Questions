//This is example of Parameterized Constructor in oops
#include<iostream>
using namespace std;

class vehicle{
public:
int wheel;
string model;
string color;

vehicle(int wheel,string model,string color){
    wheel=4;
    model="Audi";
    color="Black";
}

};

int main(){
vehicle car1(4,"TATA","Red");

cout<<"Wheels :: "<<car1.wheel<<endl;
cout<<"Model Name :: "<<car1.model<<endl;
cout<<"color :: "<<car1.color;
}   