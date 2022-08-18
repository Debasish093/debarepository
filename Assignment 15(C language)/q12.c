// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
#include<conio.h>
int sum_digits(int);
int sum_digits(int n)
{
    int s;
    if(n==0)
        return 0;
    s=n%10+sum_digits(n/10);
    return s;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of digits=%d",sum_digits(n));
    getch();
}
