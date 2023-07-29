//Write a function to calculate sum of first N odd natural numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int sumfirstN(int n);
int main()
{
    int n,a;
    cout<<"Enter a number :- ";
    cin>>n;
    a=sumfirstN(2*n-1);
    cout<<"Sum of first "<<n<<" odd natural number is "<<a;
    getch();
}
int sumfirstN(int n)
{
    int s;
    if(n==1)
    return n;
    s=n+sumfirstN(n-2);
    return s;
}


