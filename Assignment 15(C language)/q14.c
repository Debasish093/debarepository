//Write a recursive function to find the nth term of Fibonacci series.
#include<stdio.h>
#include<conio.h>
int fib(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d th term of fibonacci series is %d ",n,fib(n));
    getch();
}
