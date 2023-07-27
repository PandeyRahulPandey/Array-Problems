#include<stdio.h>
void main()
{
    int a[50],i,n;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=2;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for (i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
}