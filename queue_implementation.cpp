//This Program is a implementation of Queue
#include<iostream>
using namespace std;

int arr[5];

int front=0;
int rear=0;

int isQueueEmpty(){
    if(front==rear)
    return 1;
    return 0;
}

void dequeue(){
    if(isQueueEmpty()==1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"deque Element is "<<arr[front]<<endl;
        front++;
    }
}

int isQueuefull(){
    if(rear==5)
    return 1;
    return 0;
}

void enqueue(int val){
    if(isQueuefull()==1){
        cout<<"Queue is Full"<<endl;
    }
    else{
        arr[rear]=val;
        rear++;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    dequeue();
    dequeue();

    return 0;
}