//Write a C++ program to calculate HCF of two numbers
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int m,n,hcf,i;
    cout<<"Enter a first number  :- ";
    cin>>m;
    cout<<"Enter a second number :- ";
    cin>>n;
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        hcf=i;

    }
    cout<<"HCF is "<<hcf;
    getch();
}

