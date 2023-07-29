//Write a C++ program to print sum of square of first N natural number
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=1;i<=n;i++)
        sum=sum+i*i;
    cout<<"Sum of the square of first "<<n<<" natural number is "<<sum;
    getch();
}
