//Write a program to calculate the length of the string. (without using built in method)
#include<stdio.h>
#include<conio.h>
int main()
{
    char s[20];
    int i;
    printf("Enter a string:");
    gets(s);
    for(i=0;s[i];i++);
    printf("Length= %d",i);
}
