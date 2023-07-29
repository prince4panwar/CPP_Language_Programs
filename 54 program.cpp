//Write a function to calculate HCF two numbers.(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
int hcf(int m,int n);
int main()
{
    int m,n,a;
    cout<<"Enter a first number  :- ";
    cin>>m;
    cout<<"Enter a second number :- ";
    cin>>n;
    a=hcf(m,n);
    cout<<"HCF is "<<a;
}
int hcf(int m,int n)
{
    int a,b=m>n?n:m;
    for(a=2;a<=b;a++)
    {
        if(m%a==0&&n%a==0)
            return a;
    }
    if(a>=b)
            return 1;

}
