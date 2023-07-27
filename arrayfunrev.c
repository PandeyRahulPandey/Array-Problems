#include<stdio.h>
void rev(int[],int);
void main()
{
    int a[50],i,n,d;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a,n);
    
}
void rev(int x[],int r)
{
    int i;
    for (i=r-1;i>=0;i--)
    {
        printf("%d",x[i]);
        
    }
}