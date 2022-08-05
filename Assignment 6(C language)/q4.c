//Write a program to find middle digit of a given three digit number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,d,r;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    d=num/10;
    r=d%10;
    printf("Middle digit of the number is %d",r);
    getch();
}
