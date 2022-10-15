/*This Program will Print Harmonic Series and their Summation
e.g. n=5
    1/1+1/2+1/3+1/4+1/5
    Sum of series is = 2.28333 */
#include<iostream>
using namespace std;

int main(){
    int n,i;
    float sum = 0.0;

    cout<<"Enter the N term :: ";
    cin>>n;

    for(i=1;i<=n;i++){
        if(i<=n){
            cout<<"1/"<<i<<" + ";
            sum=sum + (1/(float)i);
        }
        if(i==n){
            cout<<"1/"<<i;
            sum=sum+(1/(float)i);
        }
    }
    cout<<endl<<"Sum of Series upto "<<n<<" is :: "<<sum;
    return 0;
}