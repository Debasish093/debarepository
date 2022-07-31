//Write a program to calculate the simple interest.
#include<stdio.h>
#include<conio.h>
int main()
{
    float P,t,r,SI;
    P=1000;
    t=5;
    r=4.5;
    SI=(P*t*r)/100;
    printf("Simple interest will be %g",SI);
    getch();
}
