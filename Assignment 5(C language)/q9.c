//Write a program to calculate the profit percentage upon selling a product. Cost price and selling price are given by the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,profit_percentage;
    printf("Enter the cost price:");
    scanf("%f",&cp);
    printf("Enter the selling price:");
    scanf("%f",&sp);
    profit_percentage=((sp-cp)/cp)*100;
    printf("Profit= %g %%",profit_percentage);
    getch();

}
