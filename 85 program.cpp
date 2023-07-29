/*Define a class Complex with instance member variables to store real and imaginary part.
Define member functions to set data and show data. Also define two constructor, one takes
two arguments to set values of real and imaginary part, second takes no argument.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private :
    int a,b;
public :
    void  set_data(int x, int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<a<<"  "<<b<<" i"<<endl<<endl;
    }
    Complex(int p, int q)
    {
      a=p;
      b=q;
    }
    Complex()
    {
      a=1;
      b=1;
    }
};
int main()
{
    Complex c1(2,4),c2;
    c1.show_data();
    c2.show_data();

    getch();
}
