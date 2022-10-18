//This Program will calculate the sum of array
#include<iostream>
using namespace std;

int main(){
    int sizeofarray;
    int sum=0;

   cout<<"Enter total number of element in array :: ";
   cin>>sizeofarray;

   int arr[sizeofarray];

    cout<<"Enter ARRAY :: ";

    for(int i=0;i<sizeofarray;i++){
        cin>>arr[i];
    }

    for(int i=0;i<sizeofarray;i++){
        sum=sum+arr[i];
    }

    cout<<"Sum of array is :: "<<sum;
    return 0;
}