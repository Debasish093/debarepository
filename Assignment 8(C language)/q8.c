/*Write a program which takes the month number as an input and display number of
days in that month.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int m,y,day;
    printf("Enter the number of month:");
    scanf("%d",&m);
    if(m==2){
        printf("Enter the year:");
        scanf("%d",&y);
        if(y%100){
            if(y%4)
                day=28;
            else
                day=29;
        }
        else if(y%400)
            day=28;
        else
            day=29;
    }
    else if(m==4||m==6||m==9||m==11)
        day=30;
    else
        day=31;
    printf("This month has %d days.",day);
    getch();

}
