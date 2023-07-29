/*Define a class Array,which contains an int array of size 10 as instance member variable.
Now define the following member functions to access this array:
a.    inputArrayElement()
b.    findMaxElement()
c.    findMinElement()
d.    sort()
e.    editElement(int index, int newData)
f.    sumOfElement()
g.    averageOfElement()*/
#include<iostream>
#include<conio.h>
using namespace std;
class Array
{
private:
    int a[10], mina, maxa, sum,indexx,newDataa;
    float average;
public:
    void inputArrayElement()
    {
        int i;
        cout<<"\nEnter ten number :- "<<endl;
        for(i=0;i<=9;i++)
        cin>>a[i];
    }
    void showinputArrayElement()
    {
        int i;
        cout<<"Your entered array is ";
        for(i=0;i<=9;i++)
        cout<<a[i]<<" ";
    }
    void findMaxElement()
    {
        int i;
        maxa=a[0];
        for(i=0;i<=9;i++)
        if(maxa<a[i])
        maxa=a[i];
    }
    void showfindMaxElement()
    {
        cout<<endl<<"Greatest number is "<<maxa;
    }
    void findMinElement()
    {
        int i;
        mina=a[0];
        for(i=0;i<=9;i++)
        if(mina>a[i])
        mina=a[i];
    }
    void showfindMinElement()
    {
        cout<<endl<<"Smallest number is "<<mina;
    }
    void sumOfElement()
    {
        int i;
        sum=0;
        for(i=0;i<=9;i++)
        sum=sum+a[i];
    }
    void showsumOfElement()
    {
        cout<<endl<<"Sum of the element is "<<sum;
    }
    void averageOfElement()
    {
        average=sum/10.0;
    }
    void showaverageOfElement()
    {
        cout<<endl<<"Average of the element is "<<average;
    }
    void sorting()
    {
        int i,r,t;
        for(i=0;i<=9;i++)
        {
            for(r=i+1;r<=9;r++)
            if(a[i]>a[r])
            {
                t=a[i];
                a[i]=a[r];
                a[r]=t;
            }
        }
    }
    void showsorting()
    {
         int i;
        cout<<endl<<"By sorting entered array :- ";
        for(i=0;i<=9;i++)
        cout<<a[i]<<" ";
    }
    void editElement(int index, int newData)
    {
       indexx=index;
       newDataa=newData;
       a[index]=newData;
    }
    void showeditElement()
    {
         int i;
        cout<<endl<<"By editing "<<newDataa<<" in "<<indexx<<" index :- ";
        for(i=0;i<=9;i++)
        cout<<a[i]<<" ";
    }

};
int main()
{
    Array a1,a2;
    a1.inputArrayElement();
    a1.showinputArrayElement();
    a1.findMaxElement();
    a1.showfindMaxElement();
    a1.findMinElement();
    a1.showfindMinElement();
    a1.sumOfElement();
    a1.showsumOfElement();
    a1.averageOfElement();
    a1.showaverageOfElement();
    a1.sorting();
    a1.showsorting();
    a1.editElement(0,10);
    a1.showeditElement();
    a2.inputArrayElement();
    a2.showinputArrayElement();
    a2.findMaxElement();
    a2.showfindMaxElement();
    a2.findMinElement();
    a2.showfindMinElement();
    a2.sumOfElement();
    a2.showsumOfElement();
    a2.averageOfElement();
    a2.showaverageOfElement();
    a2.sorting();
    a2.showsorting();
    a2.editElement(1,20);
    a2.showeditElement();
    getch();
}
