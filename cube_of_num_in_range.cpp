//This Program can Print CUBE of Numbers in Range, User will input First and Last number in range
#include<iostream>
using namespace std;

int main(){
    int nmin,nmax,cube=1;
    cout<<"Enter The Lower-LIMIT of Range for CUBES :: ";
    cin>>nmin;
    cout<<"Enter The UPPER-LIMIT of Range for CUBES :: ";
    cin>>nmax;

    for(int num=nmin; num<=nmax;++num){
        cube=num*num*num;
        cout<<"Cube of "<<num<<" is :: "<<cube<<endl;
        }
    return 0;
}