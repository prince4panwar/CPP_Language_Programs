//Write a C++ program to check whether a given character is a digit, lowercase alphabet, uppercase alphabet or a special character.fgfg
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char a;
    int b;
    cout<<"Enter the character"<<endl;
    cin>>a;
    b=a;
    if(65<=b&&b<=90)
    cout<<"Uppercase character";
    else if(97<=b&&b<=122)
    cout<<"Lowercase character";
    else if(48<=b&&b<=57)
    cout<<"Digit";
    else
    cout<<"Special character";
    getch();

}
