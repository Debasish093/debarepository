//Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
#include<conio.h>
int factorial(int);
int ncr(int,int);
int main()
{
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d%d",&n,&r);
    printf("Number of combination=%d",ncr(n,r));
    getch();
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

int ncr(int n,int r)
{
    int x;
    x=factorial(n)/(factorial(n-r)*factorial(r));
    return x;
}
