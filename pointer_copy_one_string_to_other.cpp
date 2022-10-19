//This Program will copy given string into another string
#include<iostream>
#define MAX_SIZE 100
using namespace std;

int main(){
    char text1[MAX_SIZE],text2[MAX_SIZE];
    char *str1=text1;
    char *str2=text2;  
    
    cout<<"Enter ANY String :: ";
    cin>>text1;

    while ((*str2++) = (*str1++));
    
    cout<<endl<<"First string :: "<<text1;
    cout<<endl<<"Second string :: "<<text2;
    return 0;
}