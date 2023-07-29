//Write a function to calculate permutation of arranging r items out of n terms(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
float permutation(float n,float r);
int main()
{
    float n,r,a;
    cout<<"Number of objects(n) must be greater than number of selected objects(r) (n>r)\n";
    cout<<"Enter number of object(n)    :- ";
    cin>>n;
    cout<<"Enter selection of object(r) :- ";
    cin>>r;
    if(n<r)
    {
       cout<<"Invalid input \nn must be greater than r (n>r)";
       exit(0);
    }
    a=permutation(n,r);
    cout<<"Number of Permutations P("<<n<<","<<r<<") is "<<a;
    getch();
}
float permutation(float n,float r)
{
    float a,b,c,d=1,e=1;
    c=n-r;
    for(a=1;a<=n;a++)
        d=d*a;
    for(b=1;b<=c;b++)
        e=e*b;
    return d/e;
}
