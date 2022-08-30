//Write a function to calculate length of the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int length(char []);
int length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return i;

}
int main()
{
    char s[20];
    printf("Enter a string:");
    gets(s);
    printf("length=%d",length(s));
    getch();
}
