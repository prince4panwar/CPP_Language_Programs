/*Define a class Box to represent a cuboid. Declare instance member variables to store dimensions of the
box and define instance member functions to set dimensions of the box and display dimensions of the Box.
Define one more instance member functions which returns the volume of the caller object of Box.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
private:
    int a,b,c;
public:
    void set_dimensions_box(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void show_dimensions_box()
    {
      cout<<"Length = "<<a<<" Breadth = "<<b<<" Height = "<<c<<endl;
    }
    int volume()
    {
        return a*b*c;
    }
};
int main()
{
    Box b1,b2,b3;
    b1.set_dimensions_box(1,2,3);
    b2.set_dimensions_box(4,5,6);
    b3.set_dimensions_box(7,8,9);
    b1.show_dimensions_box();
    cout<<"Volume of cuboid = "<<b1.volume()<<" cubic unit"<<endl<<endl;
    b2.show_dimensions_box();
    cout<<"Volume of cuboid = "<<b2.volume()<<" cubic unit"<<endl<<endl;
    b3.show_dimensions_box();
    cout<<"Volume of cuboid = "<<b3.volume()<<" cubic unit";
    getch();
}
