//Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,s=0;
    float average;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        s=s+a[i];
    average=(float)s/10;
    printf("Average of given 10 numbers = %g",average);
    getch();
}
