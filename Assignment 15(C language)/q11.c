// Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of squares of first %d natural numbers is = %d",n,sum_squares(n));
    getch();
}
int sum_squares(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n*n+sum_squares(n-1);
    return s;
}
