/*Define a class Result with instance member variables  resulted, total_attempt, net_right, net_wrong,
marks_for_right, marks_for_wrong.Define the following member functions:
a.   setResult() -- it takes 5 arguments for all instance variables. Set default arguments for marks_for_right
     and marks_for_wrong.
b.   showResult()*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class Result
{
private:
    int resulted, total_attempt, net_right, net_wrong, marks_for_right, marks_for_wrong;
public:
    void setResult(int x, int y, int z, int p=4, int q=1)
    {
        total_attempt=x;
        net_right=y;
        net_wrong=z;
        marks_for_right=p*y;
        marks_for_wrong=q*z;
        resulted=(marks_for_right)-(marks_for_wrong);
    }
    void showResult()
    {
        cout<<endl<<endl<<"Total number of attempted questions       :- "<<total_attempt<<endl;
        cout<<"Total number of net right questions       :- "<<net_right<<endl;
        cout<<"Total number of net Wrong questions       :- "<<net_wrong<<endl;
        cout<<"Marks for right questions                 :- "<<marks_for_right<<endl;
        cout<<"Marks deducted for wrong questions        :- "<<marks_for_wrong<<endl;
        cout<<"Student Result(Total number)              :- "<<resulted;
     }
};
int main()
{
    Result r1,r2;
    r1.setResult(10,8,2);
    r1.showResult();
    r2.setResult(10,5,5,4,1);
    r2.showResult();
    getch();
}

