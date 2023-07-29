//Write a function to print first N terms prime number
#include<iostream>
#include<conio.h>
using namespace std;
void firstNprime(int n);
int main()
{
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    firstNprime(n);
    getch();
}
void firstNprime(int n)
{
   int i,a,b=1,c=1;
    for(i=0;c<=n;i++)
    {
        for(a=2;a<b;a++)
        {
            if(b%a==0)
            break;
        }
        if(a==b)
        {
           cout<<b<<" ";
           c++;
        }
        b++;
    }
}
