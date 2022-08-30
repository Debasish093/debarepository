//Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char *x,char *y,int l)
{
    int i,t;
    for(i=0;i<l;i++){
        t=x[i];
        x[i]=y[i];
        y[i]=t;

    }
}
int main()
{
    char a[20],b[20],n,m,l;
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(b);
    n=strlen(a);
    m=strlen(b);
    l=(n>m)?n:m;
    swap(a,b,l);
    printf("\nAfter swapping---\n");
    puts(a);
    puts(b);
    getch();
}
