//Write a function to calculate of area of circle
#include<iostream>
#include<conio.h>
using namespace std;
float area(int r);
int main()
{
    int r;
    float a;
    cout<<"Enter a radius :- ";
    cin>>r;
    a=area(r);
    cout<<"Area of a circle is "<<a;
    getch();
}
float area(int r)
{
    return 3.14*r*r;
}
