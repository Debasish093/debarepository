//Write a program to count the number of vowels and consonants in a string using a pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
void counter(char *x,int n)
{
    int i,v=0,c=0;
    for(i=0;i<n;i++){
        if(x[i]>=65&&x[i]<=90||x[i]>=97&&x[i]<=122){
            if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U')
                v++;
            else
                c++;
        }
    }
    printf("Number of vowels=%d",v);
    printf("\nNumber of consonants=%d",c);
}
int main()
{
    char a[20];
    int l;
    printf("Enter a string:");
    gets(a);
    l=strlen(a);
    counter(a,l);
    getch();
}
