// This Program will Print sum of digits of a given number
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the ANY Positive Number :: ";
    cin>>n;

    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    
cout<<"Sum of digits is :: "<<sum;
return 0;
}