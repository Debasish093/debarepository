// Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
#include<conio.h>
int HCF(int,int);
int HCF(int x,int y)
{
    int i,j,k;
    j=(x<y)?x:y;
    for(i=1;i<=j;i++){
        if(x%i==0&&y%i==0)
            k=i;
    }
    return k;
}
int main()
{
    int a,b,r;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    r=HCF(a,b);
    printf("HCF of two numbers=%d",r);
    getch();
}
