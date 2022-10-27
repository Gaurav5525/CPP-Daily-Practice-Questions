//This Program will find missing elemengt in given array
#include<iostream>
using namespace std;

int MissingElement(int arr[], int Num){
    int N = Num+1;

    int total = N*(N+1)/2;
    for(int i=0;i<Num;i++){
        total -= arr[i];
    }
    return total;
}

int main(){
    int size;
    cout<<"Enter SIZE of Array :: ";
    cin>>size;
    int Num=size-1;

    int arr[Num];

    cout<<"Enter Array ";
    for(int i=0;i<Num;i++){
        cin>>arr[i];
    }

    cout<<"Missing Element in Given Array is :: "<<MissingElement(arr,Num);
    return 0;
}