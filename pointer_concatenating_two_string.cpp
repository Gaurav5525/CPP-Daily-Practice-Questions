//This Program will concatenate two string
#include<iostream>
using namespace std;

int main(){
    char str1[20],str2[20];

    cout<<"Enter First String :: ";
    cin>>str1;
    cout<<"Enter Second String :: ";
    cin>>str2;

    char *pstr1=str1;
    char *pstr2=str2;

    while (*pstr1 != '\0'){
        pstr1++;
    }

    while (*pstr2 != '\0'){
        *pstr1=*pstr2;
        pstr1++;
        pstr2++;
    }
    
    *pstr1='\0';
    cout<<"Concatenate string is :: "<<str1; 
    return 0;
}