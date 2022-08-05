//Write a program to swap values of two int variables.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    printf("Values before swapping---\n a=%d b=%d ",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nValues after swapping---\n a=%d b=%d ",a,b);
    getch();
}
