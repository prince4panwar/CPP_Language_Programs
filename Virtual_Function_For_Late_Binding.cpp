//Virtual function :- by making virtual function,
// this function will not take part in Early Binding It will be procced for late binding
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int a;
public:
    virtual void f1(){cout<<"Enter a number1A :- "; cin>>a;}
    virtual void f2(){cout<<"Enter a number2A :- "; cin>>a;}
    virtual void f3(){cout<<"Enter a number3A :- "; cin>>a;}
            void f4(){cout<<"Enter a number4A :- "; cin>>a;}
};
class B : public A
{
private:
    int a;
public:
    void f1(){cout<<"Enter a number1B :- "; cin>>a;}
    void f2(int x){a=x;}
    void f3(){cout<<"Enter a number3B :- "; cin>>a;}
    void f4(){cout<<"Enter a number4B :- "; cin>>a;}
    void f5(){cout<<"Enter a number5B :- "; cin>>a;}
};
int main()
{
    A *p;
    p=new A;
    p->f1();//Late Binding with class A
    p->f2();//Late Binding with class A
    p->f3();//Late Binding with class A
    p->f4();//Early Binding with class A
    getch();
    delete p;

    p=new B;
    p->f1();//Late Binding with class B
    p->f2();//Late Binding with class A
//    p->f2(5);//ERROR//Early Binding with class A
    p->f3();//Late Binding with class B
    p->f4();//Early Binding with class A
//    p->f5();//ERROR,Early Binding with class A
    delete p;
    getch();
}
