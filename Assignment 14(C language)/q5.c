//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
#include<conio.h>
void odd_num(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    odd_num(n);
    getch();
}
void odd_num(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",2*i-1);
}
