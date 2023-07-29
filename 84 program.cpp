//Overloading of Operator
//Operator as member of a class
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Complex
{
private:
    int a,b;
    char name[20];
public:
    void set_Complex(int x, int y)
    {
        a=x;
        b=y;
    }
    void show_Complex()
    {
        cout<<a<<"  "<<b<<"i"<<endl<<endl;
    }

  Complex operator +(Complex C)
  {
      Complex temp;
      temp.a=a+C.a;
      temp.b=b+C.b;
      return temp;
  }
  Complex operator -(Complex C)
  {
      Complex temp;
      temp.a=a-C.a;
      temp.b=b-C.b;
      return temp;
  }
  Complex operator *(Complex C)
  {
      Complex Multi;      //(ac-bd)+(ad+bc)
      Multi.a=a*C.a-b*C.b;
      Multi.b=a*C.b+b*C.a;
      return Multi;
  }
  Complex operator -()
  {
      Complex C;
      C.a=-a;
      C.b=-b;
      return C;
  }
  Complex operator --()
  {
      Complex C;
      C.a=--a;
      C.b=--b;
      return C;
  }
  Complex operator ++()
  {
      Complex C;
      C.a=++a;
      C.b=++b;
      return C;
  }
  int operator ==(Complex C)
  {
      if(a==C.a&&b==C.b)
        return 1;
      else
        return 0;
  }

};
int main()
{
    Complex c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;

    /*c1.set_Complex(3,4);
    c1.show_Complex();

    c2.set_Complex(3,4);
    c2.show_Complex();

    c3=c1+c2;
    c3.show_Complex();

    c4=c1-c2;
    c4.show_Complex();

    c5=c1*c2;
    c5.show_Complex();

    c1=-c1;
    c6.show_Complex();

    c2=--c2;
    c2.show_Complex();

    c8=++c7;
    c8.show_Complex();

    if(c1==c2)
        cout<<"Equal";
    else
        cout<<"Not Equal";
    */

    getch();
}
