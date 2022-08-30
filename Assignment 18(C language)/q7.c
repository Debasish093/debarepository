//Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[20],*p;
    int i,l;
    printf("Enter a string:");
    gets(s);
    p=&s[0];
    l=strlen(s);
    printf("Reverse:\n");
    for(i=l-1;i>=0;i--)
        printf("%c",p[i]);
    getch();
}
