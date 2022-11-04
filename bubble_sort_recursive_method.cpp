//This Program is for Bubble Sort using recursion
#include<iostream>
using namespace std;

int swap(int *num1,int *num2 ){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
} 

void bubblesort(int arr[], int size){
if(size==0 || size==1){
    return;
}

for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(&arr[i],&arr[i+1]);
        }
    }
    bubblesort (arr, size-1);
}

void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={20,50,10,30,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    cout<<"Sorted Array is "<<endl;
    display(arr,size);
    return 0;
}