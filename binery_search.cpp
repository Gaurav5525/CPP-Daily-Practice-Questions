// This Program will search given element in array
#include <iostream>
using namespace std;
#define max 6

int binarySearch(int arr[], int start, int end, int key)
{
    int mid;
    while(start<=end)
    {
        mid=(start + end)/2;
        if(arr[mid] == key)
        {
            return 1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return 0;
}

int main()
{
    int key;
    int arr[max] = {10, 20, 30, 40, 50, 60};
    cout<<"Enter Elemnt which you want to search :: ";
    cin>>key;

    if(binarySearch(arr,0,max-1,key)==1)
    {
        cout<<"******* Search Found *******"<<endl;
    }
    else
    {
        cout<<"******* Search Not Found *******"<<endl;
    }
    return 0;
}