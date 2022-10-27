//This Program will find that is array is sorted or not? 
#include<iostream>
using namespace std;

int arraySorting(int arr[],int size){
    if(size == 1 || size == 0){
        return 1;
    }
    if(arr[size-1] < arr[size-2]){
        return 0; 
    }
    return arraySorting(arr, size-1);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[1]);

    if(arraySorting(arr,size)==1){
        cout<<"ARRAY is SORTED";
    }
    else{
        cout<<"ARRAY is NOT SORTED";
    }
    return 0;
}  