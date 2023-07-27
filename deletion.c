#include<stdio.h>
void main()
{
    int a[50],n,i;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=n-1;i>=2;i--)
    {
        a[i+1]=a[i];
    }
    a[2]=80;

    for (i=0;i<n+1;i++)
    {
        printf("\n%d",a[i]);
    }
    
}