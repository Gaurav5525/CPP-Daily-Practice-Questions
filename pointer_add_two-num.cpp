//This Program can calculate sum of two numbers using pointers
#include<iostream>
using namespace std;

void addNum(int *num1,int *num2){
    int add;

    add = *num1 + *num2;
    cout<<"Addition of "<<*num1<<" and "<<*num2<<" is :: "<<add;
}


int main(){
    int num1,num2;

    cout<<"Enter FIRST Number :: ";
    cin>>num1;
    cout<<"Enter SECOND Number :: ";
    cin>>num2;

    addNum(&num1,&num2);
    return 0;
}