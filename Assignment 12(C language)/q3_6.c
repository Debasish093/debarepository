/*number pattern
    1000001
     10001
      101
       1
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j>=i && j<=2*n-i){
                if(j==i || j==2*n-i)
                    printf("1");
                else
                    printf("0");
            }
            else
                printf(" ");

        }
        printf("\n");
    }
    getch();
}
