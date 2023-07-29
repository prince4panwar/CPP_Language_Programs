/*Define a class Time with hour, min and sec as instance member variables.
Define instance member functions setTime() and showTime(). Also overload following operators:
a.   !(unary ! to set Time 0:0:0 if non zero time or set Time 1:0:0 if already zero)
b.   ++(Pre increment operator ++, increases 1 sec)
c.   ++(Post increment operator ++, increases 1 sec)*/
#include<iostream>
#include<conio.h>
#include<string.h>
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

    Time operator ++()
    {
        Time C;
        C.hour=hour;
        C.mins=mins;
        C.sec=++sec;
        return C;
    }
    Time operator ++(int)
    {
        Time C;
        C.sec=sec++;
        return C;
    }

     Time operator !()
    {
        Time T;
        if(hour==0&&mins==0&&sec==0)
        {
            cout<<"You give time zero"<<endl<<endl;
            T.hour=1;
            T.mins=0;
            T.sec=0;
            return T;
        }
        else
        {
            cout<<"You give time non zero"<<endl<<endl;
            T.hour=0;
            T.mins=0;
            T.sec=0;
            return T;
        }
    }
};
int main()
{
    Time t1,t2;
    t1.setTime(0,0,0);
    t1.showTime();
    t2=!t1;
    t2.showTime();

    /*t1=++t1;
    t1.showTime();

    t2=t1++;
    t2.showTime();*/
    getch();
}
