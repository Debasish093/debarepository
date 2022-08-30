//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
#include<conio.h>
void sort(int *ptr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(ptr[j]>ptr[j+1]){
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    printf("Sorted array is---\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
