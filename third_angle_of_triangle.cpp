// This Program can find 3rd angle of triangle if we know remaining two angles
#include<iostream>
using namespace std;

int main(){
    float an1,an2,an3;

    cout<<"Enter 1st angle of triangle :: ";
    cin>>an1;
    cout<<"Enter 2nd angle of triangle :: ";
    cin>>an2;

    an3=180-(an1+an2);

    cout<<endl<<"3rd unknown angle of triangle is :: "<<an3;
    return 0;
}