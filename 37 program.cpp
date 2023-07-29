//Write a C++ program to calculate HCF of two numbers
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int m,n,hcf;
    cout<<"Enter a first number  :- ";
    cin>>m;
    cout<<"Enter a second number :- ";
    cin>>n;
    for(hcf=m>n?n:m;1<=hcf;hcf--)
    {
        if(m%hcf==0&&n%hcf==0)
            break;
    }
    cout<<"HCF is "<<hcf;
    getch();
}
