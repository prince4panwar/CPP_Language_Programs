//Write a function to print squares of first N natural numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int sumfirstN(int n);
int main()
{
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    sumfirstN(n);
    getch();
}
int sumfirstN(int n)
{
    if(n==0)
        return n;
    sumfirstN(n-1);
    cout<<n*n<<" ";

}
