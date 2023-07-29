//Write a function to calculate combinations of selected r items out of n terms(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
int combination(int n,int r);
int main()
{
    int n,r,a;
    cout<<"Number of objects(n) must be greater than number of choosed objects(r) (n>r)\n";
    cout<<"Enter number of objects(n) :- ";
    cin>>n;
    cout<<"Enter selected objects(r)  :- ";
    cin>>r;
    if(n<r)
    {
       cout<<"Invalid input \nn must be greater than r (n>r)";
       exit(0);
    }
    a=combination(n,r);
    cout<<"Number of Permutations C("<<n<<","<<r<<") is "<<a;
    getch();
}
int combination(int n,int r)
{
    int a,b=1,c,d=1,e=1;
    c=n-r;
    for(a=1;a<=n;a++)
    b=b*a;
    for(a=1;a<=r;a++)
    e=e*a;
    for(a=1;a<=c;a++)
    d=d*a;
    return b/(e*d);

}
