/*Define a class Time to represent Time (like 3 hr 45 min 20 sec).Declare appropriate number
of instance member variables and also define instance member functions to set value for time
and display values of time*/
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
private:
    int a,b,c;
public:
    void settime(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void showtime()
    {
      cout<<a<<" hr  "<<b<<" min  "<<c<<" sec"<<endl;
    }
};
int main()
{
    int x,y,z;
    Time t1,t2;
    cout<<"Enter a time like (hours, minutes, second) :- "<<endl;
    cin>>x>>y>>z;
    t1.settime(x,y,z);
    t1.showtime();
    getch();
}
