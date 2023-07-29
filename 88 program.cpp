/*Define a class Time with hour, min and sec as instance member variables. Define instance member functions
set_Time and show_time(). Also overload following operators:
a.  +(binary + to add Time objects)
b.  -(binary - to find difference between two Time objects)
c.  >(relational operator to compare two Time Objects)
d.  ==(relational operator to compare two complex objects)*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Time
{
private:
    int hour, mins, sec;
public :
    void set_Time(int x, int y, int z)
    {
        hour = x;
        mins = y;
        sec  = z;
    }
    void show_Time()
    {
        cout<<hour<<" hour  "<<mins<<" min  "<<sec<<" sec  "<<endl;
    }
    Time operator +(Time t)
    {
        Time temp;
        temp.hour=hour+t.hour;
        temp.mins=mins+t.mins;
        temp.sec=sec+t.sec;
        return temp;
    }
    Time operator -(Time t)
    {
        Time temp;
        temp.hour=hour-t.hour;
        temp.mins=mins-t.mins;
        temp.sec=sec-t.sec;
        return temp;
    }
    int operator >(Time t)
    {
       if(hour>t.hour)
       return 1;
       else if(t.hour>hour)
       return 0;
       else if(mins>t.mins)
       return 1;
       else if(t.mins>mins)
       return 0;
       else if(sec>t.sec)
       return 1;
       else
       return 0;
    }
    int operator ==(Time t)
    {
        if(hour==t.hour&&mins==t.mins&&sec==t.sec)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Time t1,t2,t3,t4;
    t1.set_Time(3,4,6);
    t1.show_Time();

    t2.set_Time(3,4,6);
    t2.show_Time();

    t3=t1+t2;
    t3.show_Time();

    t4=t1-t2;
    t4.show_Time();

    if(t1>t2)
        cout<<"greater"<<endl;
    else
        cout<<"smaller"<<endl;

    if(t1==t2)
        cout<<"Equal";
    else
        cout<<"Not Equal";
    getch();
}

