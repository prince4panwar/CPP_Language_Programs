//                                          Function Overriding
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int a;
public:
    void set_fun()
    {
        cout<<"Enter a number1 :- ";
        cin>>a;
    }
    void show_fun()
    {
        cout<<"a = "<<a;
    }
};
class B : public A
{
private:
    int a;
public:
    void set_fun()
    {
        cout<<"Enter a number2 :- ";
        cin>>a;
    }
    void show_fun()
    {
        cout<<"a = "<<a;
    }
};
int main()
{
    B a1;
    a1.set_fun();
    a1.show_fun();
    getch();
}
