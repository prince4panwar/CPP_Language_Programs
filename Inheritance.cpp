#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
protected:
    int a;
    void showData()
    {
        cout<<"a = "<<a<<endl<<endl;
    }
};
class DoubleComplex : public Complex
{
    public:
    void access()
    {
       a=9999;
       showData();
    }
    void Secondaccess()
    {
        DoubleComplex temp;
        temp.a=9878;
        temp.showData();
    }
};

int main()
{
   DoubleComplex A, B;
   A.access();
   B.Secondaccess();
   getch();
}
