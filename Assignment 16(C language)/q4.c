//Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],l,i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    l=a[0];
    for(i=1;i<10;i++)
        if(a[i]>=l)
            l=a[i];
    printf("Greatest number is=%d",l);
    getch();
}
