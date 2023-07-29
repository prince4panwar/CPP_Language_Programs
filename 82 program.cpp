/*Define a class Operations, with static member pi with value 3.14. Define following functions.
a.  Overloaded versions of area to calculate area of circle and area of rectangle.
b.  Overloaded versions of add to calculate sum of two int values, sum of two float values,
    concatenate two strings*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class Operations
{
private:
    float area,sum;
    static float pi;
public:
    static void set_pi(float k)
    {
        pi=k;
    }
     void Area(float r)
    {
        area=pi*r*r;
        cout<<"Area of circle    :- "<<area<<endl;
    }
    void Area(float l, float b)
    {
        area=l*b;
        cout<<"Area of rectangle :- "<<area<<endl;
    }
    void add(int a, int b)
    {
        sum=a+b;
        cout<<"Sum is :- "<<sum<<endl;
    }
    /*void add(float a, float b)
    {
        sum=a+b;
        cout<<"Sum is :- "<<sum<<endl;
    }*/
    void add(double a, double b)
    {
        sum=a+b;
        cout<<"Sum is :- "<<sum<<endl;
    }
    void add(char a[],char b[])
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<"By concatenating "<<a<<" and "<<b<<" :- "<<endl;
        cout<<strcat(a,b);
    }
};
float Operations::pi;
int main()
{
    Operations a1,a2;
    char a[20]="Prince",b[20]="Panwar";
    Operations::set_pi(3.14);
    a1.Area(10);
    a2.Area(3,4);
    a1.add(1,1);
    a2.add(1.2,1.2);
    a1.add(a,b);
    getch();
}
