// Stack Implementation using array
#include <iostream>
using namespace std;

int arr[6];
int top = -1;

int isStackFull()
{
    if (top == 5)
    return 1;
    return 0;
}

void push(int val)
{
    // check if the stack is full
    if (isStackFull())    
    {
        cout << "stack is full , can not enter the " <<val<< endl;
    }
    else
    {
        cout<<"Puhed element is "<<val<<endl;
        top++;
        arr[top] = val;
    }
}

int isStackempty()
{
    if (top == -1)
    return 1;
    return 0;
}

void pop()
{
    if (isStackempty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "popped element is " << arr[top] << endl;
        top--;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    pop();
    pop();
    pop();
    
    
    return 0;
}