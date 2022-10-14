//This Program will swap First and Last Digit of Given Integer
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,count,first,last,a,b,swap;
    cout << " Input any number: ";
    cin >> num;

    count=log10(num);
    first=num/pow(10,count);
    last=num%10;

    a=first*(pow(10,count));
    b=num%a;
    num=b/10;

    swap=last*(pow(10,count))+(first+(num*10));

    cout << "\n The number after swaping the first and last digits are: "<< swap;
    return 0;
}