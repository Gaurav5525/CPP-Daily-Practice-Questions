//This Program will calculate the sum of numbers in range using recusion
#include<iostream>
using namespace std;

int RangeSum(int num){   //Function Defination
    int add=0;
    if(num==1){
        return 1;
    }
    else{ 
        add= num + RangeSum(num-1);   //Recursion
        return add;
    }
}

int main(){
    int num,sum;
    cout<<"Enter The Last Number from where you want sum till 1 :: ";
    cin>>num;

    sum=RangeSum(num);  //Function Calling
    cout<<"Sum of Numbers from 1 to "<<num<<" is :: "<<sum;
    return 0;
}