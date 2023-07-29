/*Define a class Person with name and age as private instance member variables. Define public member
functions setName(), getName(), setAge(), getAge(). Now define derived class of person, with the name
Employee. Class Employee will have empid and salary as private instance member variables.
Now define a mechanism to automatically generate empid for every new employee (define this function
as protected member). Also define following public member functions in Employee class
a.  setEmployeeData()
b.  showEmployeeData()
c.  countEmployee()*/
#include<iostream>
#include <string.h>
#include<conio.h>
using namespace std;
class Person
{
private:
    char name[20];
    int age;
public:
    void setName(char bame[])
    {
        strcpy(name,bame);
    }
    void getName()
    {
        cout<<"Name is "<<name<<endl;
    }
    void setAge(int aage)
    {
        age=aage;
    }
    void getAge()
    {
        cout<<"Age is "<<age<<endl;
    }
};
class Employee : public Person
{
private:
    int empid;
    float salary;
    static int num;
protected:
    void autoGenerate()
    {
        empid=num;
        num++;
    }
public:
    void setEmployeeData()
    {
        autoGenerate();
        cout<<"Enter salary :- ";
        cin>>salary;
    }
    void showEmployeeData()
    {
        cout<<"Employee id is "<<empid<<endl;
        cout<<"Salary is "<<salary<<endl;
    }
    void coutEmployee()
    {
        cout<<"Number of Employee is "<<num-1<<endl;
    }

};

int Employee :: num=1;
int main()
{
    Employee o1,o2;
    o1.setEmployeeData();
    o1.showEmployeeData();

    o2.setEmployeeData();
    o2.showEmployeeData();

    o2.coutEmployee();
    getch();
}

