#include<iostream>
#include<conio.h>
using namespace std;
class person
{
private:
    person()
    {
        age=1;
    }
    int age;
    static int temp;
public:
    static person* get_object()
    {
        if(temp>0)
            return NULL;
        else
        {
            temp++;
            return new person;
        }
    }
    void set_age()
    {
        cout<<"Enter a Age :- ";
        cin>>age;
    }
    void get_age()
    {
        cout<<age<<endl;
    }
};
int person::temp=0;
int main()
{
    person *p;
    p=person::get_object();
    if(p)
    {
        p->set_age();
        p->get_age();
    }
    else
    {
        cout<<"Error";
    }

    person *q;
    q=person::get_object();
    if(q)
    {
        q->set_age();
        q->get_age();
    }
    else
    {
        cout<<"Error,You can not make more object";
    }
    getch();
}
