// Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],s,i,j,k,l;
    printf("Enter the elements of 1st matrices:");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Enter the elements of 2nd matrices:");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
                c[i][j]=0;
            for(k=0;k<3;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }

    printf("Product of two matrices is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}
