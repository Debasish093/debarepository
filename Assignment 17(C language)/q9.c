//Write a function to compare two strings.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void compare(char a[],char c[])
{
    int i;
    if(strcmp(a,c)==0)
        printf("Strings are same.");
    else
        printf("Strings are not same.");
}
int main()
{
    char a[20],c[20];
    int i,j;
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(c);
    compare(a,c);
}
