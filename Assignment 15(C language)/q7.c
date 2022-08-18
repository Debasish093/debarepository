// Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
void square(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Squares of first %d natural numbers are---\n",n);
    square(n);
    getch();
}
void square(int n)
{
    if(n){
        square(n-1);
        printf("%d ",n*n);
    }
}
