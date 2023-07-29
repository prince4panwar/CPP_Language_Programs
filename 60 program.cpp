//Write a function function to print first N odd natural numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int firstNnaturalodd(int n);
int main()
{
    int n,a;
    cout<<"Enter a number :- ";
    cin>>n;
    firstNnaturalodd(2*n-1);
    getch();
}
int firstNnaturalodd(int n)
{
    if(n==-1)
      return n;
    firstNnaturalodd(n-2);
    cout<<n<<" ";
}


