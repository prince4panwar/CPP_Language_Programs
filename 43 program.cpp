//Write a C++ program to print octal of a given decimal number.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,a[20],b,j;
    cout<<"Enter a Decimal number :- ";
    cin>>n;
    if(n==0)
    {
        cout<<"Octal number is "<<n;
        exit(0);
    }
    for(i=0;n!=0;i++)
    {
        a[i]=n%8;
        n=n/8;
    }
    i--;
    b=i;
    cout<<"Octal number is ";
    for(j=0;j<=b;j++)
    {
      cout<<a[i];
      i--;
    }
    getch();
}
