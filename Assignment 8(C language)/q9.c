/* Write a program to find the nature of roots of a quadratic equation.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a,b,c,d;
    printf("Enter the value of a,b and c where f(x)= ax2 + bx + c= 0\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("Roots are real and distinct");
    else if(d==0)
        printf("Roots are real and equal");
    else
        printf("Roots are complex");
    getch();
}
