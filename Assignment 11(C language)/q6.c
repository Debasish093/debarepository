//Write a program to calculate factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("Factorial of %d is %d",n,fact);
    getch();
}
