/*
    *
   ***
  *****
   ***
    *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j>=n+1-i && j<=n-1+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=2*n-1;j++){
            if(j>=n+1-i && j<=n-1+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
