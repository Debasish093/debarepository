/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float usd,inr;
    printf("Enter the amount in INR:");
    scanf("%f",&inr);
    usd=inr/76.23;
    printf("It is equivalent to %g USD",usd);
    getch();
}
