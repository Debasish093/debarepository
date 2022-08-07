/* Write a program to print the first 10 even natural numbers.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=10){
        printf("%d ",2*i);
        i++;
    }
    getch();
}
