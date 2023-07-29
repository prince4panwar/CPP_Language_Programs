/*Define a class Employee empid, name and salary as instance member variable. Define following instance member functions in it:
a. setEmployeeid(int id)
b. setEmployeeName(char n[])
c. setEmployeeSalary(float s)
d. ShowEmployee()
e. getSalary()
f. getEmpid()
g. getName()*/
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class Employee
{
private:
    int empid;
    char name[20];
    float salary;
public:
    void setEmployeeid(int id)
    {
        empid=id;
    }

     void setEmployeeSalary(float s)
     {
         salary=s;
     }
     void setEmployeeName(char n[])
    {
        for(int i=0;n[i];i++)
        name[i]=n[i];
    }
     void showEmployee()
     {
         cout<<endl<<"Employee id     = "<<empid<<endl;

         cout<<"Employee name   = ";
         for(int i=0;name[i];i++)
         cout<<name[i];

         cout<<endl<<"Employee salary = "<<salary<<endl;
     }
    void getSalary(){cout<<"Salary = "<<salary<<endl; }
    void getEmpid() {cout<<"Id     = "<<empid<<endl;  }
    void getName()  {cout<<"Name   = "<<name<<endl;   }

};
int main()
{
    Employee e1,e2;

    e1.setEmployeeid(100);
    e1.setEmployeeName("Prince");
    e1.setEmployeeSalary(50000);
    e1.showEmployee();
    e1.getSalary();
    e1.getEmpid();
    e1.getName();

    e2.setEmployeeid(200);
    e2.setEmployeeName("Sourav");
    e2.setEmployeeSalary(10000);
    e2.showEmployee();
    e2.getSalary();
    e2.getEmpid();
    e2.getName();
    getch();
}
