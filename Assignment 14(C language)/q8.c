//Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
#include<conio.h>
int fact(int);
int npr(int,int);
int main()
{
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d%d",&n,&r);
    printf("Number of arrangements=%d",npr(n,r));
    getch();
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int npr(int n,int r)
{
    int x;
    x=fact(n)/fact(n-r);
    return x;
}
