//Write a function to calculate sum of first N even natural numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int sumfirstN(int n);
int main()
{
    int n,a;
    cout<<"Enter a number :- ";
    cin>>n;
    a=sumfirstN(n);
    cout<<"Factorial of "<<n<<" is "<<a;
    getch();
}
int sumfirstN(int n)
{
    int s;
    if(n==1||n==0)
    return n;
    s=n*sumfirstN(n-1);
    return s;
}




