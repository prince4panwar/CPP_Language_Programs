//Write a program to calculate LCM of a given number
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m,n,i,hcf,lcm;
    printf("Enter two numbers for calculating LCM\n");
    printf("Enter a first number  :- ");
    scanf("%d",&m);
    printf("Enter a second number :- ");
    scanf("%d",&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        hcf=i;
        lcm=(m*n)/hcf;
    }
    printf("LCM of %d and %d is %d",m,n,lcm);
    getch();
}

