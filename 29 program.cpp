//Write a C++ program to print factorial of a number
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=1;i<=n;i++)
        fact=fact*i;
    cout<<"Factorial of "<<n<<" is "<<fact;
    getch();
}
