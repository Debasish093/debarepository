// Write a function to calculate the factorial of a number.(TSRS)
#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial=%d",factorial(n));
    getch();
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
