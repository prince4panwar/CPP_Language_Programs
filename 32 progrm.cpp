//Write a C++ program to check whether a given number is prime or not
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
           cout<<n<<" is not a prime number"<<endl;
           break;
        }
    }
        if(i==n)
            cout<<n<<" is a prime number"<<endl;
        if(n<=1)
            cout<<n<<" is not a prime number"<<endl;
    getch();
}
