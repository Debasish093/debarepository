//Write a function to reverse a string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void Reverse(char s[]);
void Reverse(char s[])
{
    int l,i;
    char a[20];
    l=strlen(s);
    for(i=0;i<l;i++){
        a[i]=s[l-1-i];
    }
    a[i]='\0';
    puts(a);

}
int main()
{
    char s[20];
    int i,l;
    printf("Enter a string:");
    gets(s);
    Reverse(s);
}
