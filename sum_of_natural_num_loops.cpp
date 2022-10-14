// This Program can find sum of (n) natural number 
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;

    cout<<"Enter n Number till where you want sum of natural Number :: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    
    cout<<"Sum of first "<<n<<" Numbers is "<<sum;
    return 0;
}