//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Size of int variable is %d byte",sizeof(a));
    printf("\nSize of float variable is %d byte",sizeof(b));
    printf("\nSize of char variable is %d byte",sizeof(c));
    printf("\nSize of double variable is %d byte",sizeof(d));
    getch();
}
