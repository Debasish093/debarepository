/* Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
        printf("It is a upper case letter.");
    else if(x>='a' && x<='z')
        printf("It is a lower case letter.");
    else if(x>='0' && x<='9')
        printf("It is a digit.");
    else
        printf("It is a special character.");
    getch();
}
