//Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=n;
    while(i>=1){
        printf("%d ",i);
        i--;
    }
    getch();
}
