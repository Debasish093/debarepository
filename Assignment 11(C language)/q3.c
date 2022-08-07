//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=2*n;i=i+2)
        s=s+i;
    printf("Sum of first %d odd natural numbers is %d",n,s);\
    getch();
}
