//Write a function to print first N number of Fibonacci series(TSRN)
#include<iostream>
#include<conio.h>
using namespace std;
void fibonacci(int n);
int main()
{
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    fibonacci(n);
    getch();
}
void fibonacci(int n)
{
    int a=-1,b=1,c,i;
    cout<<"First numbers of "<<n<<" Fibonacci series is given below :-"<<endl;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}

