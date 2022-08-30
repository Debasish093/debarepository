// Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,s_even=0,s_odd=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++){
        if(a[i]%2==0)
            s_even=s_even+a[i];
        else
            s_odd=s_odd+a[i];
    }

    printf("Sum of Even numbers=%d",s_even);
    printf("\nSum of Odd numbers=%d",s_odd);
    getch();
}
