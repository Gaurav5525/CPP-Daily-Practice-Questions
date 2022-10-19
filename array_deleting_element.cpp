//This Program will delete the elemnt in array
#include<iostream>
using namespace std;

int main(){
    int size=5;
    int arr[size]={3,8,5,9,7};
    int key,index=0;

    cout<<"Element to Delete :: ";
    cin>>key;

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }

    cout<<"New ARRAY is :: "<<endl;
    for (int i = 0; i < size-1; i++){
       cout<<arr[i]<<endl;
    }
    return 0;
}