//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("Prime");
    else
        printf("Not prime");
    getch();

}
