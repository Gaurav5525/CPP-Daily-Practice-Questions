//This is example of constructor within classes
#include<iostream>
using namespace std;

class car{
public:
int wheels;
string color;
string model;

car(){
wheels = 4;
color = "black";
model = "xyz";
}
};





int main(){
car c1;
c1.model="Tata";
c1.color="Blue";
c1.wheels=4;

cout<<c1.model<<endl;
cout<<c1.color<<endl;
cout<<c1.wheels<<endl;

}