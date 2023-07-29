//Write a C++ program to print first N natural number
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=1;i<=n;i++)
        cout<<i<<endl;
    getch();
}
