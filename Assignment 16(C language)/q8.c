//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int small(int [],int);
int small(int a[],int n)
{
    int i,s;
    s=a[0];
    for(i=1;i<n;i++)
        if(a[i]<s)
            s=a[i];
    return s;
}
int main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Smallest number is %d",small(a,n));
    getch();
}
