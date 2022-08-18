// Write a recursive function to print first N odd natural numbers
#include<stdio.h>
#include<conio.h>
void N_odd(int);
void N_odd(int n)
{
    if(n)
    {
        N_odd(n-1);
        printf("%d ",2*n-1);
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("First %d odd natural numbers are---\n",n);
    N_odd(n);
    getch();
}
