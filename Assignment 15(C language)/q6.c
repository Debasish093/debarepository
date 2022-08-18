//Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void Rev_even(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("First %d Even natural numbers in reverse order---\n",n);
    Rev_even(n);
    getch();
}
void Rev_even(int n)
{
    if(n){
        printf("%d ",2*n);
        Rev_even(n-1);
    }
}
