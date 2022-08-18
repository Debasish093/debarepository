// Write a recursive function to calculate factorial of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of the given number is %d",fact(n));
    getch();
}
int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
