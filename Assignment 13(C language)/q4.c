/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a,b,c;
    while(1){
    printf("\n-------------------------------------------------------------------------");
    printf("\n1.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
    printf("\n2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
    printf("\n3.Check whether a given set of three numbers are equilateral triangle or not");
    printf("\n4.Exit");
    printf("\n-------------------------------------------------------------------------");
    printf("\nEnter your choice:");
    scanf("%d",&x);
    switch(x){
        case 1:
            {
                printf("Enter three numbers:");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b||b==c||c==a)
                    printf("Given numbers are lengths of an isosceles triangle.");
                else
                    printf("Given numbers are not lengths of an isosceles triangle.");
                break;
            }
        case 2:
            {
                printf("Enter three numbers:");
                scanf("%d%d%d",&a,&b,&c);
                if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
                    printf("Given numbers are lengths of sides of a right angled triangle");
                else
                    printf("Given numbers are not lengths of sides of a right angled triangle");
                break;
            }
        case 3:
            {
                printf("Enter three numbers:");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b && b==c)
                    printf("Given numbers are sides of equilateral triangle.");
                else
                    printf("Given numbers are not sides of equilateral triangle.");
                break;
            }
        case 4:
            printf("---------END-------");
            exit(0);
        default:
            printf("Invalid Input");

    }//End of switch
    }
    getch();
}
