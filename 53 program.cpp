//Write a function to calculate LCM of two numbers.(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
int lcm(int m,int n);
int main()
{
    int m,n,a;
    cout<<"Enter a first number  :- ";
    cin>>m;
    cout<<"Enter a second number :- ";
    cin>>n;
    a=lcm(m,n);
    cout<<"LCM is "<<a;
    getch();
}
int lcm(int m,int n)
{
    int a,i;
    a=m>n?n:m;
    for(a;a<=m*n;a++)
    {
        if(a%m==0&&a%n==0)
        return a;
    }
}
