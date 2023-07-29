//Write a C++ program to print first N natural number in reverse order
#include<iostream>
#include<stdio.h>
#include<Conio.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a number :- ";
    cin>>n;
    for(i=1;i<=n;n--)
    cout<<n<<endl;
    getch();
}
