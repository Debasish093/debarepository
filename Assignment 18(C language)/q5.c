// Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,*p,s=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    p=&a[0];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++){
        s=s+p[i];
    }
    printf("Sum of the elements=%d",s);
    getch();
}
