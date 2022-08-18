//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
#include<conio.h>
void natural_num(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    natural_num(n);
    getch();
}
void natural_num(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}
