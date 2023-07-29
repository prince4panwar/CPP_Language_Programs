//Write a C++ program to check whether a given number is even or odd.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number :- ";
    cin>>x;
    if(x%2==0)
        cout<<x<<" is even number";
    else
        cout<<x<<" is odd number";
    getch();
}
