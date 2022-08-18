// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
#include<conio.h>
float simple_interest(int,int,float);
int main()
{
    int p,t;
    float r,si;
    printf("Enter principle:");
    scanf("%d",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter time in years:");
    scanf("%d",&t);
    si=simple_interest(p,t,r);
    printf("Simple Interest= %g",si);
    getch();
}
float simple_interest(int p,int t,float r)
{
    float x;
    x=p*t*r/100;
    return x;
}
