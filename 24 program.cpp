//Write a C++ program to print first N even natural number
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=2;i<=2*n;i+=2)
        cout<<i<<endl;
    getch();
}
