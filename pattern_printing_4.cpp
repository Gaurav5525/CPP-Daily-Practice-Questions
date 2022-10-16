/* This Program will Print Pattern Like
e.g. 
     1                                                                                  
     2 3                                                                                                         
     4 5 6                                                                                                       
     7 8 9 10 
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    int count=1;

    cout<<"Enter the Number of ROWS :: ";
    cin>>n;

    for(int rows=1;rows<=n;rows++)
    {
  
        for(int col=1;col<=rows;col++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}