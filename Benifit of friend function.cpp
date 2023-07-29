//when we have to access private members of two different classes at the same time
#include<iostream>
#include<conio.h>
using namespace std;
class Ball;//Declaration of Ball class
class Apple
{
private :
    int a=2;
public:
    friend void fun1(Apple,Ball);
};

class Ball
{
private:
    int b=3;
public:
    friend void fun1(Apple,Ball);
};
void fun1(Apple obj1, Ball obj2)
{
    cout<<"sum is "<<obj1.a+obj2.b;
}
int main()
{
  Apple a1;
  Ball b1;
  fun1(a1,b1);
  getch();
}
