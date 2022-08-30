//Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,s=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
        s=s+arr[i];
    printf("Sum of given 10 numbers = %d",s);
    getch();
}
