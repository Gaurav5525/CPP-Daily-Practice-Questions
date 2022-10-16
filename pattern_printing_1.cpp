/* This program will print a pattern like
e.g. 
     *
     * *
     * * * 
     * * * *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of ROWS :: ";
    cin>>n;

    for(int rows=1;rows<=n;rows++){
        for(int col=1;col<=rows;col++){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}