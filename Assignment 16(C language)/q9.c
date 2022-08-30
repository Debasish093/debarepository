//Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int sort(int [],int);
int sort(int a[],int n)
{
    int i,j,t;
    for(j=1;j<=n;j++){
        for(i=0;i<n-j;i++){
            if(a[i+1]<a[i]){
                t=a[i+1];
                a[i+1]=a[i];
                a[i]=t;
            }
        }
    }
    return a;
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
    printf("After sorting----\n");
    sort(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    getch();
}
