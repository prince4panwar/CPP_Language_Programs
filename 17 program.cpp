//Write a C++ program to check whether a given character is a digit, lowercase alphabet, uppercase alphabet or a special character.fgfg
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char a;
    cout<<"Enter the character"<<endl;
    cin>>a;
    if('a'<=a&&a<='z')
    cout<<"Lower alphabet";
    else if('A'<=a&&a<='Z')
    cout<<"Upper alphabet";
    else if('1'<=a&&a<='9')
    cout<<"Digit";
    else
    cout<<"Special character";
    getch();
}

