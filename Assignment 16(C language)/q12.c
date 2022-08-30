//Write a program in C to find the transpose of a given matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,row,col;
    printf("Enter number of rows:");
    scanf("%d",&row);
    printf("Enter number of columns:");
    scanf("%d",&col);
    int a[row][col];
    printf("Enter the elements of the matrix:");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    printf("Transpose of the given matrix is\n");
    for(i=0;i<col;i++){
        for(j=0;j<row;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }
}
