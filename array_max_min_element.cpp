//This Program will Find samllest and largest value in array
#include <iostream>
using namespace std;

int main()
{
   int size,i,max,min;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<size;i++){
        if(max < arr[i]){
            max=arr[i];
        }
    }
    min=arr[0];
    for(i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Smallest Element in Array :: "<<min<<endl;
    cout<<"Largest Element in Array :: "<<max;
    return 0;
}
