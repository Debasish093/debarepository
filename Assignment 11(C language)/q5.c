//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+i*i*i;
    printf("Sum of cubes of first %d natural numbers is %d",n,s);
    getch();
}
