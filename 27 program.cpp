//Write a C++ program to print Table of a user's choice
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=1;i<=10;i++)
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    getch();
}
