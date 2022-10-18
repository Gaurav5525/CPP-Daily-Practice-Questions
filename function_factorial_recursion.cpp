//This Program can calculate factorial of given number by using recursion
#include<iostream>
using namespace std;

int factorial(int num){
    if(num>1){
        return num*factorial(num-1);
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cout<<"Enter ANY Number :: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is :: "<<factorial(num);
    return 0;
}