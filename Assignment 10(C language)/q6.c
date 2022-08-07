//Write a program to print the first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=2*n){
        printf("%d ",i);
        i=i+2;
    }
    getch();
}
