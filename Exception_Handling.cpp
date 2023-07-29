//This is how exception handling works
#include<iostream>
#include<conio.h>
using namespace std;
class Division
{
private:
    int numerator,denominator,result;
public:
    void Divide()
    {
        cout<<"Enter Numerator and denominator for division :- "<<endl;
        cin>>numerator>>denominator;
        try
        {
            if(denominator==0)
                throw denominator;
            result=numerator/denominator;
            cout<<"Division :- "<<result;
        }
        catch(int exp)
        {
            cout<<"Exception! You entered 0(zero) denominator"<<endl;
        }
    }
};
int main()
{
    Division d1;
    d1.Divide();
    getch();
}
