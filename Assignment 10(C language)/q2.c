/* Write a program to print the first N natural numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d ",i);
        i++;
    }
    getch();
}
