//                      Base Pointer
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int a;
public:
    void f1(){cout<<"Enter a number :- ";cin>>a;}
    void f2(int x){a=x;}
};
class B : public A
{
private:
    int b;
public:
    void f1(){cout<<"Enter a number :- ";cin>>b;}
    void f2(){cout<<"b = "<<b;}
    int f3(){return b;}
};
int main()
{
    A *p;
    p=new B;
    p->f1();
    p->f2(5);
    getch();
}
