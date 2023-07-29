//Write a function to check whether a given number is prime or odd.Return 1 if number is even,otherwise return 0.(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
int oddeven(int n);
int main()
{
    int num,r;
    cout<<"Enter a number :- ";
    cin>>num;
    r=oddeven(num);
    cout<<r;
    getch();
}
int oddeven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
