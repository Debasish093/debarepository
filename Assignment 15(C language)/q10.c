// Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
int sum_even(int);
int sum_even(int n)
{
    int s;
    if(n==1)
        return 2;
    s=2*n+sum_even(n-1);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of %d even natural numbers is= %d",n,sum_even(n));
    getch();
}
