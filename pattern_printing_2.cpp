/* This Program will print pattern like
e.g. 
    1
    1 2
    1 2 3 
    1 2 3 4
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of ROWS :: ";
    cin>>n;

    for(int rows=1;rows<=n;rows++){
        int count=1;
        for(int col=1;col<=rows;col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}