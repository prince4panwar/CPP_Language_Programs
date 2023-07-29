//Write a C++ program to print prime number between two given number.
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int m,n,i;
    cout<<"Enter a first number  :- ";
    cin>>n;
    cout<<"Enter a second number :- ";
    cin>>m;
    for(n++;n<m;n++)
    {
       for(i=2;i<=n-1;i++)
       {
           if(n%i==0)
           break;
       }
       if(i==n)
        cout<<n<<endl;
    }
    getch();
}
