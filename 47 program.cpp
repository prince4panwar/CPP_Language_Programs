//Write a function to find  next prime number of a given number
#include<iostream>
#include<conio.h>
using namespace std;
int next_prime_number(int n);
int main()
{
    int n,a;
    cout<<"Enter a number :- ";
    cin>>n;
    a=next_prime_number(n);
    cout<<"Next prime number is "<<a;
    getch();
}
int next_prime_number(int n)
{
    int i;
    n++;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        n++;
    }
    if(i==n)
        return n;
    else
        return i;
}
