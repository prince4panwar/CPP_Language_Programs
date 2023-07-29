//Write a recursive function to print binary of a decimal number
#include<iostream>
#include<conio.h>
using namespace std;
int binary(int n);
int main()
{
    int n;
    cout<<"Enter a decimal number :- ";
    cin>>n;
    cout<<"Binary of "<<n<<" is ";
    binary(n);
    getch();
}
int binary(int n)
{
    if(n==1)
         cout<<"1";
    else
    {
        binary(n/2);
        cout<<n%2;
    }
}
