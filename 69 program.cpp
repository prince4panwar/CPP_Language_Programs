/*Define a class Complex to represent a complex number.Declare instance member variables to store real
and imaginary part of a complex number, also define instance member functions to set values of complex
number and print values of complex number*/
#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
   private:
    int a,b;
   public:
    void setcomplex(int x,int y)
    {
        a=x;
        b=y;
    }
    void showcomlex()
    {
        cout<<a<<" i"<<b<<endl;
    }
    Complex add(Complex x)
    {
        x.a=a+x.a;
        x.b=b+x.b;
        return x;
    }


};
int main()
{
    int a,b,x,y;
   Complex c1,c2,c3;
   cout<<"Enter real and imaginary part of a complex number :- ";
   cin>>a>>b;
   cout<<"Enter real and imaginary part of a complex number :- ";
   cin>>x>>y;
   c1.setcomplex(a,b);
   c2.setcomplex(x,y);
   c1.showcomlex();
   c2.showcomlex();
   c3=c1.add(c2);
   c3.showcomlex();
   getch();
}

