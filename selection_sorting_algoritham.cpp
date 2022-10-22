//This Program will sort given array using selection sorting
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex=i; 
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}   


int main()
{
    int arr[] = {60,10,50,30,20,40};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    cout << "Sorted Array" << endl;
    printarray(arr, size);
    return 0;
    }
