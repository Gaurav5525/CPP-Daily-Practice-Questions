//This is Program for Insertion Sort
#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    int i,value,index;
    for(i=1;i<size;i++){
        value = arr[i];
        index=i;
        while (index>0 && arr[index-1]>value){
            arr[index]=arr[index-1];
            index--;
        }
        arr[index]=value;    
    }
}

void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[] = {20,50,10,30,40};
    int size = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, size);
    display(arr, size);
 
    return 0;
}