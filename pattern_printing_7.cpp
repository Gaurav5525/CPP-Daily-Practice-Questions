/* This Program will print pattern like
e.g. 
       1                                                               
      2 2                                                              
     3 3 3                                                             
    4 4 4 4 
*/
#include<iostream>
using namespace std;

int main(){
    int rows,i,j,k,space,counter=1;

    cout<<"Enter Number Of ROWS :: ";
    cin>>rows;
    space=rows+4-1;

    for(i=1;i<=rows;i++){
       
        for(k=space;k>=1;k--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<counter<<" ";
        }
    counter++;
    cout<<endl;
    space--;
    }
    return 0;
}