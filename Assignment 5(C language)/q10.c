//Write a program to calculate the area of a triangle where base and height of the triangle are given.
#include<stdio.h>
#include<conio.h>
int main()
{
    float base,height,area;
    printf("Enter the base of the triangle:");
    scanf("%f",&base);
    printf("Enter the height of the triangle:");
    scanf("%f",&height);
    area=(base*height)/2;
    printf("Area of the triangle= %g",area);
    getch();
}
