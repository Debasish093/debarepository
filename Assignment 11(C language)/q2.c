//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+2*i;
    printf("Sum of first %d even natural numbers is %d",n,s);
    getch();
}
