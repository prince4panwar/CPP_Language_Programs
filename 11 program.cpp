//Write a C++ program to check whether a given number is divisible by 7 or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number :- ";
    cin>>x;
    if(x%7==0)
        cout<<x<<" is divisible by 7";
    else
        cout<<x<<" is not divisible by 7";
    getch();
}
