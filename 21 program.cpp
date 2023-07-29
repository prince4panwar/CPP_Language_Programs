//Write a C++ program to find greater among 3 given numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter three number :-"<<endl;
    cin>>x>>y>>z;
    if(x>y&&x>z)
        cout<<x<<" is a greater number";
    else if(y>x&&y>z)
        cout<<y<<" is a greater number";
    else
        cout<<z<<" is a greater number";
    getch();
}
