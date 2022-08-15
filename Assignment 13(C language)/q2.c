/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,x;
    while(1)
    {
        printf("\n---------------------------------------------------------");
        printf("\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Exit");
        printf("\n---------------------------------------------------------");
        printf("\nEnter your choice:");
        scanf("%d",&x);
    switch(x){
        case 1:
        {
            printf("Enter two numbers:");
            scanf("%d%d",&a,&b);
            c=a+b;
            printf("Addition= %d",c);
            break;
        }
        case 2:
        {
            printf("Enter two numbers:");
            scanf("%d%d",&a,&b);
            c=a-b;
            printf("Subtraction= %d",c);
            break;
        }
        case 3:
        {
            printf("Enter two numbers:");
            scanf("%d%d",&a,&b);
            c=a*b;
            printf("Multiplication= %d",c);
            break;
        }
        case 4:
        {
            printf("Enter two numbers:");
            scanf("%d%d",&a,&b);
            c=a/b;
            printf("Division= %d",c);
            break;
        }
        case 5:
            printf("--------THE END-----------");
            exit(0);
        default:
            printf("Invalid Input");
    }//End of switch
    }//End of loop

}
