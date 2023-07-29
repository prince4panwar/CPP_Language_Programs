//Write a C++ program to print reverse of a given number.
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,a;
    cout<<"Enter a number :- ";
    cin>>n;
    cout<<"Reverse is     :- ";
    for(i=1;n!=0;i++)
    {
        a=n%10;
        n=n/10;
        cout<<a;
    }
    getch();
}
