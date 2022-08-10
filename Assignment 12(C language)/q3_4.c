/*Star pattern 4:
    ABCD
    ABC
    AB
    A
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char x;
    for(i=1;i<=4;i++){
            x='A';
        for(j=1;j<=5-i;j++){
                printf("%c",x++);
        }
        printf("\n");
    }
    getch();
}
