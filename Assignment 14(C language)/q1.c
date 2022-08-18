//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
#include<conio.h>
float area(int);
int main()
{
    int r;
    float a;
    printf("Enter the radius of a circle:");
    scanf("%d",&r);
    a=area(r);
    printf("Area of the circle is %f",a);
    getch();
}
float area(int r)
{
    return 3.14*r*r;
}
