/*Write a program to find greater among three numbers. If two or three numbers are
identical and greatest among all then print it only once.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,l;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b){
        if(a>=c)
            l=a;
        else
            l=c;
    }
    else{
        if(b>=c)
            l=b;
        else
            l=c;
    }
    printf("Largest number is %d",l);
    getch();
}
