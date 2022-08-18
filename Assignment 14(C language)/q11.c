// Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
#include<conio.h>
int isPrime(int);
int isPrime(int x)
{
    int i;
    for(i=2;i<x;i++){
        if(x%i==0)
            return -1;
    }
}
int main()
{
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    r=isPrime(n);
    if(r==-1)
        printf("Not a prime number");
    else
        printf("Prime Number");
    getch();
}
