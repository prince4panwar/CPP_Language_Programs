//Write a C++ program to calculate LCM of two numbers
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int m,n,lcm;
    cout<<"Enter a first number  :- ";
    cin>>m;
    cout<<"Enter a second number :- ";
    cin>>n;
    for(lcm=m>n?n:m;lcm<=m*n;lcm++)
    {
        if(lcm%m==0&&lcm%n==0)
        break;

    }
    cout<<"LCM is "<<lcm;
    getch();

}
