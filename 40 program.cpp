//Write a C++ program to find greatest digit of a given number
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,maxi,a;
    cout<<"Enter a number :- ";
    cin>>n;
    maxi=n%10;
    for(i=0;n!=0;i++)
    {
        a=n%10;
        if(a>maxi)
            maxi=a;
        n=n/10;
    }
    cout<<"Greatest number is "<<maxi;
    getch();
}
