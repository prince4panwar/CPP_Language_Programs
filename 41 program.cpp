//Write a C++ program to calculate x power y,where values of x and y are given by user
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    float x,y,i,power=1.00;
    cout<<"Enter x and x power y"<<endl;
    cout<<"Enter a value of x :- ";
    cin>>x;
    cout<<"Enter a value of y :- ";
    cin>>y;
    if(y>=0)
    for(i=1;i<=y;i++)
    power=power*x;
    else
    for(i=1;i<=-y;i++)
    power=power*(1/x);
    cout<<x<<" power "<<y<<" is "<<power;
    getch();
}
