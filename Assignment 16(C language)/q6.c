//Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,t,j;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(j=1;j<=9;j++){
        for(i=0;i<10-j;i++)
        {
            if(a[i+1]<a[i]){
                t=a[i+1];
                a[i+1]=a[i];
                a[i]=t;
            }

        }
    }
    printf("After Sorting-----\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    getch();
}
