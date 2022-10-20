//This Program can calculate HCF of Two Number
#include<iostream>
using namespace std;

void hcf(int a, int b)
{
    int m,n;
    m=a;
    n=b;
    
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else 
            n=n-m;
    }
    cout<<"\n H.C.F of ["<<a<<"] and ["<<b<<"] is = "<<m<<"\n";
}

int main()
{
    int a,b;
    cout<<"Enter 1st number :: ";
    cin>>a;
    cout<<"Enter 2nd number :: ";
    cin>>b;
    
    hcf(a,b);
    
    return 0;
}
