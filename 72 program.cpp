#include<iostream>
#include<conio.h>
using namespace std;
class item
{
    private:
  int a,b;
  static int k;
    public:
  void set_a(int x){a=x;}
  int show_a(){return a;}
  void set_b(int x){b=x;}
  int show_b(){return b;}
  static void set_k(int x){k=x;}
  static int show_k(){return k;}
};
int item ::k;
int main()
{
 item i1,i2;
 i1.set_a(1);
 cout<<"a="<<i1.show_a()<<endl;
 i1.set_b(2);
 cout<<"b="<<i1.show_b()<<endl;
  item::set_k(3);
 cout<<"k="<<item::show_k()<<endl;
  i2.set_a(5);
 cout<<"a="<<i2.show_a()<<endl;
 i2.set_b(6);
 cout<<"b="<<i2.show_b()<<endl;

 getch();
}
