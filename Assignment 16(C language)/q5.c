//Write a program to find the smallest number stored in an array of size 10. Take array values from the user
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,s;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    s=a[0];
    for(i=1;i<10;i++)
        if(a[i]<s)
            s=a[i];
    printf("Smallest Number is %d",s);
    getch();
}
