/*Write a program to print the squares of first 10 natural numbers in reverse order*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=10;
    while(i>=1){
        printf("%d ",i*i);
        i--;
    }
    getch();
}
