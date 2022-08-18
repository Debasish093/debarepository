// Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
#include<conio.h>
void Nprime(int);
void Nprime(int x)
{
    int i=1,j,c=1;
    while(c<=x){
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
        }
        if(j==i){
            printf("%d ",j);
            c++;
        }

        i++;
    }

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("FIRST %d PRIME NUMBERS ARE\n",n);
    Nprime(n);
    getch();
}
