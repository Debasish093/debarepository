/*Write a program to take a three digit number from the user and rotate its digits by one
position towards the right.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,d,r;
    printf("Enter a three digit number:");
    scanf("%d",&n);
    d=n%10;
    n=n/10;
    r=d*100+n;
    printf("result=%d",r);
    getch();

}
