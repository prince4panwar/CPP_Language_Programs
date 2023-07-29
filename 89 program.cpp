/*Define a class Complex with instance member variables to store real and imaginary part.
Define member functions to set data and show data. Overload following operators in the class
a.   -(unary - to negative the value of complex object)
b.   ++(Pre increment operator ++)
c.   ++(Post increment operator ++)
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void set_data(int x, int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<a<<"  "<<b<<" i"<<endl;
    }
    Complex operator ++()
    {
        Complex C;
        C.a=++a;
        C.b=b;
        return C;
    }
    Complex operator ++(int)
    {
        Complex C;
        C.a=a++;
        C.b=b;
        return C;
    }
    Complex operator -()
    {
        Complex C;
        C.a=-a;
        C.b=-b;
        return C;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.set_data(1,2);
    c1.show_data();
    c2=++c1;//pre increment
    c2.show_data();
    c2=c1++;//post increment
    c2.show_data();
    c3=-c1;
    c3.show_data();
    getch();
}


