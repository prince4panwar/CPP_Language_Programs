#include<iostream>
#include<istream>
#include<ostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int a,b;
public :
    friend istream& operator >>(istream &, Complex &);//Overloading of Extraction operator(>>)
    friend ostream& operator <<(ostream &, Complex &);//Overloading of Insertion operator(<<)
};

istream& operator >>(istream &din, Complex &C)//Overloading of Extraction operator(>>)
{
    cout<<"Enter a two number :- ";
    din>>C.a>>C.b;
    return din;
}

ostream& operator <<(ostream &dout, Complex &C)//Overloading of Insertion operator(<<)
{
    dout<<"a = "<<C.a<<"  b = "<<C.b<<endl;
    return dout;
}

int main()
{
    Complex C1, C2;
    cin>>C1>>C2;
    cout<<C1<<C2;
    getch();
}

