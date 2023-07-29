//Write a C++ program to print first n number of Fibonacci series
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int a=-1,b=1,c,n,i;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
         c=a+b;
         a=b;
         b=c;
         cout<<c<<endl;
    }
    getch();
}
