//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
#include<conio.h>
int LCM(int,int);
int LCM(int x,int y)
{
    int i,l;
    l=(x>y)?x:y;
    for(i=l;i<=x*y;i=i+l){
        if(i%x==0&&i%y==0)
            return i;
    }
}
int main()
{
    int a,b,r;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    r=LCM(a,b);
    printf("LCM of two numbers=%d",r);
    getch();
}
