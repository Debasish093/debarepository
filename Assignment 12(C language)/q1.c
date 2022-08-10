//Write a program to print first N terms of a Fibonacci series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c=0,i,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    getch();
}
