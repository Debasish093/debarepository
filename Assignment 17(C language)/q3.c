// Write a program to count vowels in a given string
#include<stdio.h>
#include<conio.h>
int main()
{
    char s[30],i,c=0;
    printf("Enter a string:");
    gets(s);
    for(i=0;s[i];i++){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
            c++;
    }
    printf("Number of vowels=%d",c);
    getch();
}
