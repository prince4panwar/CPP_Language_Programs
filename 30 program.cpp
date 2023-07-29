//Write a C++ program to count digit in a given number
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i,Count=0;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=0;n!=0;i++)
    {
       Count++;
        n=n/10;
    }
    cout<<"Number of digit is "<<Count;
}
