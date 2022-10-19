//This Program will calculate the lenght of string
#include<iostream>
using namespace std;

int lenght(char *text){
    int count=0;
    while (*text != '\0') {
        count++;
        text++;
    }
    return count;
}

int main(){
    char text[]="gaurav";
    int count=0;

    cout<<"Lenght of string ["<<text<<"] is :: "<<lenght(text);
    return 0;
}