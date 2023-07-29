//Write a function function to print first N natural numbers in reverse order.
#include<iostream>
#include<conio.h>
using namespace std;
int firstNnatural(int n);
int main()
{
    int n,a;
    cout<<"Enter a number :- ";
    cin>>n;
    firstNnatural(n);
    getch();
}
int firstNnatural(int n)
{
    if(n==0)
        return n;
    cout<<n<<" ";
    firstNnatural(n-1);
}

