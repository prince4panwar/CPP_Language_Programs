//Write a function to calculate sum of squares of first N natural numbers.
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
    cout<<"Sum of the square of first "<<n<<" natural number is "<<a;
    getch();
}
int sumfirstN(int n)
{
    int s;
    if(n==0)
    return n;
    s=n*n+sumfirstN(n-1);
    return s;
}

