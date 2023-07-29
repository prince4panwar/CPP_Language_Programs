//Write a C++ program to check whether a triangle is right angled triangle or not.
//Takes lengths of the sides from the user.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter sides of triangle :- \n";
    cin>>x>>y>>z;
    if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==x*x+y*y)
        cout<<"This is right angle triangle";
    else
        cout<<"This is not right angle triangle";
    getch();
}
