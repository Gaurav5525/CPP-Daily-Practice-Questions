//This program can Print PRIME Number in range
#include<iostream>
using namespace std;

int main(){
    int first,last,num1,i;

    cout<<"Enter Range from where you want to print PRIME Number :: ";
    cin>>first;
    cout<<"Enter Range till you want to print PRIME Number :: ";
    cin>>last;

    for(first;first<=last;first++){
        for(i=2;i<first;i++){
			if(first%i==0)
			{
				break;
			}
		}
	    if(first==i){
		cout<<endl<<first;
		}

    }
return 0;
}