/*Write a program to check whether a given number is positive, negative or zero.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0)
        printf("The number is Zero");
    else if(n>0)
        printf("The number is positive");
    else
        printf("The number is negative");
    getch();
}
