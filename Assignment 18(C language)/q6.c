//Write a program to print the elements of an array in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Reverse:\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    getch();
}
