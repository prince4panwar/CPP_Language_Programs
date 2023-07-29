//Write a function to print first N even natural numbers in reverse order.
#include<iostream>
#include<conio.h>
using namespace std;
int firstNeven(int n);
int main()
{
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    firstNeven(2*n);
    getch();

}
int firstNeven(int n)
{
    if(n==0)
        return n;
    cout<<n<<" ";
    firstNeven(n-2);
}


