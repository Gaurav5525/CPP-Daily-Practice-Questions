//This Program will search element in array using linear or sequential search
#include<iostream>
using namespace std;
#define max 6

int linearSearch(int arr[], int key){
    for(int i=0;i<max;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[max]={10,45,20,78,30,69};
    int key;

    cout<<"Enter Element to Find :: ";
    cin>> key;

    if(linearSearch(arr,key)==1){
        cout<<"******* Search Found *******"<<endl;
    }
    else{
        cout<<"******* Search NOT Found *******"<<endl;
    }
    return 0;
}