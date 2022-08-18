//Write a recursive function to print first N even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("First %d even numbers are---\n",n);
    N_even(n);
    getch();
}
void N_even(int n)
{
    if(n)
    {
        N_even(n-1);
        printf("%d ",2*n);
    }
}
