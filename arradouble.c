#include<stdio.h>
void main()
{
    int a[50],i,n;
    printf("enter the number of elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<nn;i++)
    {
        if (a[i]%2==0)
        printf("%d",2*a[i]);
        else 
        printf("%d",3*a[i]);
    }
}