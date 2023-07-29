/*Define a class Time with instance member variables of hour min and second. Define setTime and showTime functions.
Also define normalize function to make object data in standard form(min and sec should be less than 60).
Also define functions for the following operations:
a. Addition
b. Subtraction*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Time
{
private:
    int hour, mins, sec;
public:
    void setTime(int x,int y,int z)
    {
        hour=x;
        mins=y;
        sec=z;
    }
    void showTime()
    {
        cout<<hour<<" hour  "<<mins<<" min  "<<sec<<" sec"<<endl<<endl;
    }
    void normalize()
    {
        cout<<"By making time in standard form :- "<<endl<<endl;
        for(int i=0;sec>=60||mins>=60;i++)
        {
            if(sec>=60)
            {
                Addition_mins();
                subtraction_sec();
            }
            if(mins>=60)
            {
                Addition_hour();
                subtraction_mins();
            }

        }
    }

    inline void Addition_mins()
    {
        mins=mins+1;
    }
    inline void subtraction_sec()
    {
        sec=sec-60;
    }
    inline void Addition_hour()
    {
        hour=hour+1;
    }
    inline void subtraction_mins()
    {
        mins=mins-60;
    }
};
int main()
{
    Time t1, t2;
    t1.setTime(125,2378754,2400508);
    t1.showTime();
    t1.normalize();
    t1.showTime();

    getch();
}

