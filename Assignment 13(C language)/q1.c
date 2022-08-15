/*Write a program which takes the month number as an input and display number of
days in that month.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int m,day,y;
    printf("Enter the month number:");
    scanf("%d",&m);
    switch(m){
    case 1:
        day=31;
        break;
    case 2:
        {
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
        break;
    case 3:
        day=31;
        break;
    case 4:
        day=30;
        break;
    case 5:
        day=31;
        break;
    case 6:
        day=30;
        break;
    case 7:
        day=31;
        break;
    case 8:
        day=31;
        break;
    case 9:
        day=30;
        break;
    case 10:
        day=31;
        break;
    case 11:
        day=30;
        break;
    case 12:
        day=31;
        break;
    }
    printf("Number of days is %d",day);
    getch();
}
