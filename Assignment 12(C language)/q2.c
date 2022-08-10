//Write a program to calculate HCF of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,s,i,hcf;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    s=(a<b)?a:b;
    for(i=1;i<=s;i++){
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("HCF = %d",hcf);
    getch();
}
