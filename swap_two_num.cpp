// This Program will swap two number
#include<iostream>
using namespace std;

int main(){
    int n1,n2,temp;
    cout<<"Enter First Number :: ";
    cin>>n1;
    cout<<"Enter Second Number :: ";
    cin>>n2;

    temp=n2;
    n2=n1;
    n1=temp;

    cout<<endl<<"*AFTER SWAPING*"<<endl;
    cout<<endl<<"First Number after Swapping is "<<n1<<endl;
    cout<<"Second Number after swapping is "<<n2;

    return 0;
}
