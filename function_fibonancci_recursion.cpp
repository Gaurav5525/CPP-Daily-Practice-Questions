//This Program will print fibonancci Series using recursion
#include<iostream>
using namespace std;

int fibonacci(int num){
    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
    return 0;
}

int main(){
    int num;
    cout<<"Enter Number till you want FIBONACCI Series :: ";
    cin>>num;

    for (int i=0; i<num; i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}