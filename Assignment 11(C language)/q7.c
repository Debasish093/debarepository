//Write a program to count digits in a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        n=n/10;
        i++;
    }
    printf("Number of digits = %d",i);
    getch();
}
