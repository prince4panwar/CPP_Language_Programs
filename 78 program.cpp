/*Define a class Account, which contains following instance member variables
a.  account_no.
b.  balance
Also declare static member variable for rate of interest. Now define following member function.
(Analyze and decide which function has to be static and which has to be instance member)
c.  setBalance()
d.  setAccountNo()
e.  getBalance()
f.  getAccountNo()
g.  setRateOfInterest()
h.  getRateOfInterest()*/
#include<iostream>
#include<conio.h>
using namespace std;
class Account
{
private:
    int account_no;
    float balance;
    static int rate_of_interest;
public:
    void set_Balance()
    {
      cout<<"Enter Balance         :- ";
      cin>>balance;
    }
    void set_AccountNo()
    {
      cout<<"Enter Account number  :- ";
      cin>>account_no;
    }
    void get_Balance()
    {
       cout<<endl<<"Balance     :- "<<balance<<endl;
    }
    void get_AccountNo()
    {
       cout<<"Account No. :- "<<account_no<<endl;
    }
    static void set_RateOfInterest()
    {
      cout<<endl<<"Enter Rate of interest :- ";
      cin>>rate_of_interest;
    }
    static void get_RateOfInterest()
    {
      cout<<"Rate of interest       :- "<<rate_of_interest<<endl;
    }

};
int Account::rate_of_interest;
int main()
{
    Account a1;
    a1.set_Balance();
    a1.set_AccountNo();
    a1.get_Balance();
    a1.get_AccountNo();
    Account::set_RateOfInterest();
    Account::get_RateOfInterest();
    getch();
}
