// Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
#include<conio.h>
int nextPrime(int);
int nextPrime(int x)
{
    int k=x+1,i;
    while(1){
        for(i=2;i<k;i++){
            if(k%i==0)
                break;
        }
        if(i==k)
            return k;
        k++;
    }
}
int main()
{
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    r=nextPrime(n);
    printf("Next prime number is %d",r);
    getch();
}
