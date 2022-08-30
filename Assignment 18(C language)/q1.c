// Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping----\n");
    printf("a=%d  b=%d ",a,b);
    swap(&a,&b);
    printf("\nAfter swapping----\n");
    printf("a=%d  b=%d",a,b);
    getch();
}
