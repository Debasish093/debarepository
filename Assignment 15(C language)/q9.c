//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of fist %d odd natural numbers is=%d",n,sum_odd(n));
    getch();
}
int sum_odd(int n)
{
    int s;
    if(n==1)
        return 1;
    s=2*n-1+sum_odd(n-1);
    return s;
}
