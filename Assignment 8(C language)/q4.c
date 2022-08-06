/*Write a program to check whether a given year is a leap year or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("Enter a year:");
    scanf("%d",&y);
    if(y%100){
        if(y%4)
            printf("Not a leap year");
        else
            printf("Leap year");
    }
    else if(y%400)
        printf("Not a Leap year");
    else
        printf("Leap year");
    getch();

}
