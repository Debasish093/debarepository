/*
    54321
    4321
    321
    21
    1
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=6-i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}
