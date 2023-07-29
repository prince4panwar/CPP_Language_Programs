//Write a C++ program to swap values of two int vaiables
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,t;
    cout<<"Enter a first number  :- ";
    cin>>x;
    cout<<"Enter a second number :- ";
    cin>>y;
    cout<<"x = "<<x<<" and y = "<<y;
    t=x;
    x=y;
    y=t;
    cout<<"\nx = "<<x<<" and y = "<<y;
    getch();
}

