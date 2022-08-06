/*Write a program to check whether a given number is divisible by 3 and divisible by 2.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%6)
        printf("%d is not divisible by 3 and 2",n);
    else
        printf("%d is divisible by 3 and 2",n);
    getch();
}
