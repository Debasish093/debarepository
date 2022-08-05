//Write a program to find last digit of a given number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,r;
    printf("Enter a number:");
    scanf("%d",&num);
    r=num%10;
    printf("Last digit of the given number is %d",r);
    getch();
}
