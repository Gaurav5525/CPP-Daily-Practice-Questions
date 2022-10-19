//This Program will insert element in array and shift remaining elements to right position
#include<iostream>
using namespace std;

int main(){
    int size=6;
    int arr[size]={20,10,25,34,20};
    int position;
    int element;
    int i;

    cout<<"At which Position you want insert :: ";
    cin>>position;

    cout<<"Enter element to add :: ";
    cin>>element;
 
    for(i=size;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=element;

    for(i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}