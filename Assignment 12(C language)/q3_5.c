/*Star pattern 5:
    ABCDCBA
     ABCBA
      ABA
       A
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of lines:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
            k='A';
        for(j=1;j<=2*n-1;j++){
            if(j>=i && j<=2*n-i){
                if(j<=(2*n-1)/2)
                    printf("%c",k++);
                else
                    printf("%c",k--);
            }

            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

