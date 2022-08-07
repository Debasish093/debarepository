/*Write a program to print MySirG N times on the screen*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        printf("MySirG\n");
        i++;
    }
    getch();
}
