//Write a function to calculate factorial of a given number.(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int);
int main()
{
    int a,n;
    cout<<"Enter a number :- ";
    cin>>n;
    a=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<a;
    getch();
}
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
