// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void RevNum(int);
void RevNum(int n)
{
    if(n){
        printf("%d ",n);
        RevNum(n-1);
    }

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("First %d natural numbers in reverse order---\n",n);
    RevNum(n);
    getch();
}
