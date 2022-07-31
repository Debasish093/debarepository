//Write a program which takes a character as input and print its ASCII code.
#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    printf("ASCII value of %c is %d",x,x);
    getch();
}
