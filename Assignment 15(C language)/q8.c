//Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is=%d",n,sum(n));
}
int sum(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n+sum(n-1);
    return s;
}
