//Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the day number:");
    scanf("%d",&n);
    switch(n){
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
    default:
        printf("Invalid");

    }
    getch();
}
