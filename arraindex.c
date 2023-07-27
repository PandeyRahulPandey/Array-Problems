#include<stdio.h>
void main()
{
    int a[50],i,n,co=0,ce=0;
    printf("enter the number of elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (i%2==0)
        printf("%d",a[i]*a[i]);
        else
        printf("%d",a[i]*a[i]*a[i]);
    }
}