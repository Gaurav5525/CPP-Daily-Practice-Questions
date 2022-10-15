//This Program will Print FIBONACCI Series
#include<iostream>
using namespace std;

int main(){
    int first=0,second=1,next,range;

    cout<<"Enter the Last Number of Fibonacci Series :: ";
    cin>>range;

    for(int i=0;i<range;i++){
        cout<<" "<<first<<" ";
        next=first+second;
        first = second;
        second = next;
    }
    cout<<endl;
    return 0;
}