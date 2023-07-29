//Write a C++ program to check whether a given number is positive, negative or zero.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number :- ";
    cin>>x;
    if(x>0)
        cout<<x<<" is positive number";
    else if(x<0)
        cout<<x<<" is negative number";
    else
        cout<<x<<" is zero";
    getch();
}
