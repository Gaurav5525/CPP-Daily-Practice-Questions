/* This Program will print pattern like
e.g. 1
     2 2
     3 3 3
     4 4 4 4
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    int count=1;
    cout<<"Enter the Number of ROWS :: ";
    cin>>n;

    for(int rows=1;rows<=n;rows++){
  
        for(int col=1;col<=rows;col++){
            cout<<count<<" ";
        }
        count++;
        cout<<endl;
    }
    return 0;
}