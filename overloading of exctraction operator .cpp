#include<iostream>
#include<istream>

#include<conio.h>
using namespace std;
class Complex
{
private:
    int a,b;
public :
    friend istream& operator >>(istream &, Complex &);
    void show_data()
    {
        cout<<"a = "<<a<<"  b = "<<b<<endl;
    }
};

istream& operator >>(istream &din, Complex &C)
{
    cout<<"Enter a two number :- ";
    din>>C.a>>C.b;
    return din;
}

int main()
{
    Complex C1, C2;
    cin>>C1>>C2;
    C1.show_data();
    C2.show_data();
    getch();
}
