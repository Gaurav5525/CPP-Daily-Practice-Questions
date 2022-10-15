//This Progam will Print the entred Number in reverse manner
#include<iostream>
using namespace std;

int main(){
    int num,rev=0,r,n;

    cout<<"Enter ANY Number :: ";
    cin>>num;

    while(num>0){
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    cout<<rev;
    return 0;
}