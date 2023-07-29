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
    a=sumfirstN(2*n);
    cout<<"Sum of first "<<n<<" even natural number is "<<a;
    getch();
}
int sumfirstN(int n)
{
    int s;
    if(n==2)
    return n;
    s=n+sumfirstN(n-2);
    return s;
}



