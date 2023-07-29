/*Define a class Complex with instance member variables to store real and imaginary part.
Define member functions to set data and show data.Also define functions to perform
various mathematical operations between two objects of Complex. Following id the list of
operations.
a.  Addition
b.  subtraction
c.  multiplication*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void set_complex()
    {
        cout<<endl<<"Enter two parts of a complex number(Real & Imaginary) :- "<<endl;
        cin>>a>>b;
    }
    void show_complex()
    {
        if(a>=0&&b>=0)
            cout<<endl<<a<<" + "<<b<<"i"<<endl;
        else if(a<0&&b>0)
            cout<<endl<<a<<" + "<<b<<"i"<<endl;
            else
                cout<<endl<<a<<" - "<<-b<<"i"<<endl;

    }
    Complex addition(Complex C)
    {
        C.a=a+C.a;
        C.b=b+C.b;
        return C;
    }
    Complex subtraction(Complex C)
    {
        C.a=a-C.a;
        C.b=b-C.b;
        return C;
    }
    Complex multiplication(Complex C)
    {
        Complex Multi;
        //(ac-bd) + (ad+bc)i
        Multi.a=a*C.a-b*C.b;
        Multi.b=a*C.b+b*C.a;
        return Multi;
    }
};
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.set_complex();
    c1.show_complex();
    c2.set_complex();
    c2.show_complex();
    /*c3=c1.addition(c2);
    cout<<endl<<"Addition of two Complex numbers       :- ";
    c3.show_complex();
    c4=c1.subtraction(c2);
    cout<<endl<<"Subtraction of two Complex numbers    :- ";
    c4.show_complex();*/
    c5=c1.multiplication(c2);
    cout<<endl<<"Multiplication of two Complex numbers :- ";
    c5.show_complex();

    getch();
}
