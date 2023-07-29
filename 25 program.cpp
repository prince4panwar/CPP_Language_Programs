//Write a C++ program to print first N odd natural number in reverse order
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i,a;
    cout<<"Enter a number :- ";
    cin>>n;
    a=2*n-1;
    for(i=1;i<=a;a-=2)
        cout<<a<<endl;
    getch();
}
