//Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<conio.h>
int main()
{
    char s[100],x,i,c=0;
    printf("Enter a string:");
    gets(s);
    printf("Enter a character:");
    scanf("%c",&x);
    for(i=0;s[i];i++){
        if(s[i]==x)
            c++;
    }
    printf("occurrence of the given character in the given string is %d times",c);
    getch();
}
