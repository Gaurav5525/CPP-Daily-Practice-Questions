//This Program will swap the two Numbers
#include<iostream>
using namespace std;

void SwapNum(int num1,int num2){    //Function defination
    int temp;
    temp=num2;
    num2=num1;
    num1=temp;
    cout<<"After Swaping First Number is "<<num1<<" and Second Number is "<<num2;
}

int main(){
    int num1,num2;
    cout<<"Enter FIRST Number :: ";
    cin>>num1;
    cout<<"Enter SECOND Number :: ";
    cin>>num2;  

    SwapNum(num1,num2); //Function Calling
    return 0; 
}


