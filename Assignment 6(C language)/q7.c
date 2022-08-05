/*Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,d;
    printf("Enter a number:");
    scanf("%d",&num);
    d=num%10;
    printf("Result=%d",num-d);
    getch();
}
