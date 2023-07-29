//Write a C++ program to print sum of the digit of a given number
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i,sum=0,a;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=0;n!=0;i++)
    {
       a=n%10;
       sum=sum+a;
       n=n/10;
    }
    cout<<"Sum of the digit is "<<sum;
    getch();
}
