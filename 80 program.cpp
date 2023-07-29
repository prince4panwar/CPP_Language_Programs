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
        for(int i=0;sec>=60;i++)
        {
            mins=mins+1;
            sec=sec-60;
        }
        for(int i=0;mins>=60;i++)
        {
            hour=hour+1;
            mins=mins-60;
        }
    }
    Time addition(Time T)
    {
        Time temp;
        temp.hour=hour+T.hour;
        temp.mins=mins+T.mins;
        temp.sec=sec+T.sec;
        return temp;
    }
    Time subtraction(Time T)
    {
        Time temp;
        temp.hour=hour-T.hour;
        temp.mins=mins-T.mins;
        temp.sec=sec-T.sec;
        return temp;
    }
};
int main()
{
    Time t1, t2, t3, t4;
    t1.setTime(12,37,122);
    t1.showTime();
    t1.normalize();
    t1.showTime();

    t2.setTime(11,35,122);
    t2.showTime();
    t2.normalize();
    t2.showTime();

    t3=t1.addition(t2);
    cout<<"By adding two times :- "<<endl;
    t3.showTime();
    t3.normalize();
    t3.showTime();

    t4=t1.subtraction(t2);
    cout<<"By subtracting two times :- "<<endl;
    t4.showTime();
    t4.normalize();
    t4.showTime();

    getch();
}
