//This Program will reverse the given array element
#include<iostream>
using namespace std;

int main(){
    int size,i;
    
    cout<<"Enter Elemets Size in ARRAY :: ";
    cin>>size;

    int arr[size];
    int *ptr=arr;

    cout<<"Enter 5 Elemets in ARRAY :: ";

    for(i=0;i<size;i++){
        cin>> *(ptr+i);
    }

    cout<<"After Reverse New ARRAY is :: "<<endl;
    for(i=size-1;i>=0;i--){
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}