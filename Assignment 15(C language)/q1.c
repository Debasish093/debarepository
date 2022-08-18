//Write a recursive function to print first N natural numbers
#include<stdio.h>
#include<conio.h>
void Nnum(int);
void Nnum(int n)
{
    if(n){
        Nnum(n-1);
        printf("%d ",n);
    }

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("First %d natural numbers are---\n",n);
    Nnum(n);
    getch();

}

