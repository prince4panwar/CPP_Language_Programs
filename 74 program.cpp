//Write a recursive function to print of octal decimal number
#include<iostream>
#include<conio.h>
using namespace std;
void binary(int n);
int main()
{
    int n;
    cout<<"Enter a decimal number :- ";
    cin>>n;
    cout<<"Octal of "<<n<<" is ";
    binary(n);
    getch();
}
void binary(int n)
{
    if(n<8)
         cout<<n;
    else
    {
        binary(n/8);
        cout<<n%8;
    }
}

