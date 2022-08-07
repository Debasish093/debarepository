//Write a program to reverse a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,d,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        d=n%10;
        s=s*10+d;
        n/=10;
    }
    printf("Reverse=%d",s);
    getch();
}
