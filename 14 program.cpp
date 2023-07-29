//Write a C++ program to find nature of roots of quadratic equation
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter coefficient of quadratic equation\n";
     cout<<"Enter a :- ";
     cin>>a;
     cout<<"Enter b :- ";
     cin>>b;
     cout<<"Enter c :- ";
     cin>>c;
     d=b*b-4*a*c;
     if(d>0)
        cout<<"Real roots";
     if(d==0)
        cout<<"Equal roots";
     if(d<0)
        cout<<"Imaginary roots";
     getch();
}
