// Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void Rev_pdd(int);
void Rev_odd(int n)
{
    if(n){
        printf("%d ",2*n-1);
        Rev_odd(n-1);
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("First %d natural numbers in reverse order---\n",n);
    Rev_odd(n);
    getch();
}
