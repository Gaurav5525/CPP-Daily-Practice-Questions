//This Program will print NON PRIME Number from 2 to uperbound which is given by USER
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int range,num;
    cout<<"Input the upperlimit :: ";
    cin >> range;
    cout <<endl<<"The non-prime numbers are :: "<<endl;

    for(num=2;num<=range;++num)
    {
        int mfactor=(int) sqrt(num);
        for(int fact=2;fact<=mfactor;++fact)
        {
            if(num%fact==0){
                cout<<num<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}