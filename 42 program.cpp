//Write a C++ program to print binary of a given decimal number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,a[20],j,b;
    cout<<"Enter a Decimal number :- ";
    cin>>n;
    for(i=0;n!=0;i++)
    {
       a[i]=n%2;
        n=n/2;
    }
    i--;
    b=i;
    cout<<"Binary number is ";
    for(j=0;j<=b;j++)
    {
      cout<<a[i];
      i--;
    }
    getch();
}
