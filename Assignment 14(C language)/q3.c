//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
#include<conio.h>
int isEven(int);
int main()
{
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    r=isEven(n);
    if(r==1)
        printf("Even Number.");
    else
        printf("Odd Number.");
    getch();
}
int isEven(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}
