//Write a function to print all prime number between two number.(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
int all_prime_number(int m,int n);
int main()
{
    int m,n,a;
    cout<<"Enter a first  number :- ";
    cin>>m;
    cout<<"Enter a second number :- ";
    cin>>n;
    cout<<"All prime number between "<<m<<" and "<<n<<endl;
    m++;
    for(m;m<n;m++)
    {

        a=all_prime_number(m,n);
        if(a!=0)
        cout<<a<<" ";
    }
    getch();
}
int all_prime_number(int m,int n)
{
      int i;
      for(i=2;i<m;i++)
      {
          if(m%i==0)
            break;
      }
      if(i==m)
        return m;
      else
        return 0;
}

