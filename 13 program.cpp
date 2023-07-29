//Write a C++ program to check whether a given number is octal number or not
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,a;
    cout<<"Enter a number :- ";
    cin>>n;
    a=n;
    for(i=0;n%10<8;i++)
    {
        if(n>=0&&n<=7)
        {
           cout<<a<<" is octal number";
           break;
        }
        if(n%10>=0&&n%10<=7)
        n=n/10;
    }
    if(n%10==8||n%10==9)
        cout<<a<<" is non octal number";
        getch();
}
