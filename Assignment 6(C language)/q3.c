//Write a program to find first digit of a given three digit number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,r;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    r=num/100;
    printf("The first digit of the given number is %d",r);
    getch();
}
