//Write a function to check whether a given number is prime or not.Return 1 if number is prime, otherwise return 0.(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
int prime_number(int n);
int main()
{
    int n,r;
    cout<<"Enter a number :- ";
    cin>>n;
    r=prime_number(n);
    cout<<r;
    getch();
}
int prime_number(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
    {
     if(n%i==0)
        return 0;
    }
    if(i==n)
        return 1;
    else
        return 0;

}
