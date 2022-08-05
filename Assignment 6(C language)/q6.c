//Write a program to swap values of two int variables without using third variable.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    printf("Values before swapping----\n a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues after swapping----\n a=%d b=%d",a,b);
    getch();
}
