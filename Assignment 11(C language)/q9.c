//Write a program to calculate LCM of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,l;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    l=(a>b)?a:b;
    for(i=l;i<=a*b;i=i+l){
        if(i%a==0 && i%b==0)
            break;
    }
    printf("LCM is %d",i);
    getch();
}
