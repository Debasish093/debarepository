// Write a program to convert a given string into uppercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[30];
    printf("Enter a string:");
    gets(s);
    puts(strupr(s));
    getch();
}
