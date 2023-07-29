/*Create an array of 10 employees(use Employee class of question 2).Define following functions:
a.   displayEmployees(Employee[])
b.   sortEmployeesBySalary(Employee[])
b.   sortEmployeesByName(Employee[])
b.   sortEmployeesByEmpid(Employee[])*/
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
    void setEmployee_id(int id)
    {
        empid=id;
    }

     void setEmployee_Salary(float s)
     {
         salary=s;
     }
     void setEmployee_Name(char n[])
    {
      /*for(int i=0;n[i];i++)
        name[i]=n[i];*/
        strcpy(name,n);
    }
     void showEmployee()
     {
         cout<<endl<<"Employee id     = "<<empid<<endl;

         cout<<"Employee name   = ";
         for(int i=0;name[i];i++)
         cout<<name[i];

         cout<<endl<<"Employee salary = "<<salary<<endl;
     }
     void displayEmployees(Employee Emp[])
     {
       for(int i=0;i<=9;i++)
        Emp[i].showEmployee();
     }
     void sort_Employee_by_Salary(Employee Emp[])
     {
         int i,r;
         Employee t;
         for(i=0;i<=9;i++)
        {
            for(r=i+1;r<=9;r++)
            if(Emp[i].salary>Emp[r].salary)
            {
                t=Emp[i];
                Emp[i]=Emp[r];
                Emp[r]=t;
            }
        }
     }
     void sort_Employees_By_Empid(Employee Emp[])
     {
         int i,r;
         Employee t;
         for(i=0;i<=9;i++)
        {
            for(r=i+1;r<=9;r++)
            if(Emp[i].empid>Emp[r].empid)
            {
                t=Emp[i];
                Emp[i]=Emp[r];
                Emp[r]=t;
            }
        }
     }
     void sort_Employees_By_Name(Employee Emp[])
     {
         int i,r;
         Employee t;
         for(i=0;i<=9;i++)
        {
            for(r=i+1;r<=9;r++)
            if(strcmp(Emp[i].name,Emp[r]. name)==1)
            {
                t=Emp[i];
                Emp[i]=Emp[r];
                Emp[r]=t;
            }
        }
     }

};
int main()
{
    Employee e[10],f;
    int i,a;
    char b[20];
    float c;
     for(i=0;i<=9;i++)
     {
         cout<<"Enter id of "<<i+1<<" employee     :- ";
         cin>>a;
         e[i].setEmployee_id(a);

         cout<<"Enter name of "<<i+1<<" employee   :- ";
         cin.ignore();
         cin.getline(b,10);
         e[i].setEmployee_Name(b);

         cout<<"Enter salary of "<<i+1<<" employee :- ";
         cin>>c;
         e[i].setEmployee_Salary(c);
         cout<<endl;
     }

     f.displayEmployees(e);
    /*for(i=0;i<=9;i++)
        e[i].showEmployee();*/

     f.sort_Employee_by_Salary(e);
     cout<<endl<<"\nBy sorting Employee by salary:- \n"<<endl;
     f.displayEmployees(e);

     f.sort_Employees_By_Empid(e);
     cout<<endl<<"\nBy sorting Employee by id:- \n"<<endl;
     f.displayEmployees(e);

     f.sort_Employees_By_Name(e);
     cout<<endl<<"\nBy sorting Employee by name:- \n"<<endl;
     f.displayEmployees(e);

   getch();
}
