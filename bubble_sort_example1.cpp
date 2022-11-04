//This is Program for Bubhble Sort
#include<iostream>
using namespace std;

int swap(int *num1,int *num2 ){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

int bubblesort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    return 0;
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {60,10,50,30,20,40};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr,size);
    cout<<"Soeted Array is "<<endl;
    display(arr,size);
    return 0;
}