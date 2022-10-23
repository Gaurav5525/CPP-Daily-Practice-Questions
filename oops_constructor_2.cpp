//This Program will take and print student details using constructor
#include<iostream>
using namespace std;

class student{
int RollNo;
string Name;
string Class;
string Div;

public:
    student(){
        cout<<"Enter Student Roll No :: ";
        cin>>RollNo;
        cout<<"Enter Student Name :: ";
        cin>>Name;
        cout<<"Enter Class of Student :: ";
        cin>>Class;
        cout<<"Enter Div of Student :: ";
        cin>>Div;
    }
    void display(){
        cout<<endl<<" Name :: "<<Name<<endl;
        cout<<endl<<" Roll No :: "<<RollNo<<endl;
        cout<<endl<<" Class :: "<<Class<<" And Division :: "<<Div<<endl;
    }
};


int main(){
    student s1;
    s1.display();
}