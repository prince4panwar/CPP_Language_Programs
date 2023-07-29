/*Define a class Box with instance member variables lenght, breadth and height.
Define instance member functions setDimensions() and showDimensions().
Also define three constructors:
a.  Non-parameterized constructor.
b.  Takes three arguments for three dimensions.
c.  Take one argument which is for all three dimensions.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
private :
    float lenght, breadht, height;
public :
    void set_dimensions(float x, float y, float z)
    {
        lenght=x;
        breadht=y;
        height=z;
    }
    void show_data()
    {
cout<<"Lenght  = "<<lenght<<endl<<"Breadht = "<<breadht<<endl<<"Height  = "<<height<<endl<<endl;
    }
    Box()
    {
        lenght=1;
        breadht=2;
        height=3;
    }
    Box(float x, float y, float z)
    {
        lenght=x;
        breadht=y;
        height=z;
    }
    Box(float a)
    {
        lenght=a;
        breadht=a;
        height=a;
    }
};
int main()
{
    Box b1,b2(2.3,3.4,4.5),b3(4),b4;

    b1.show_data();
    b2.show_data();
    b3.show_data();

    b4.set_dimensions(1.1,2.2,3.3);
    b4.show_data();

    getch();
}
