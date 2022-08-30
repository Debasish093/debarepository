//Write a program to reverse a string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[30];
    printf("Enter a string:");
    gets(s);
    puts(strrev(s));
    getch();
}
