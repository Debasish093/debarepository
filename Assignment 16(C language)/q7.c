// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int greatest(int a[],int);
int greatest(int a[],int n)
{
    int i,l;
    l=a[0];
    for(i=1;i<n;i++)
        if(a[i]>l)
            l=a[i];
    return l;
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
    printf("Greatest number is %d",greatest(a,n));
    getch();
}
