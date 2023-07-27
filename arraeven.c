#include<stdio.h>
void main()
{
    int a[40],n,i;
    printf("enter the number of elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
        printf("%d",a[i]);
    }
    printf("\nRahul Pandey,section N,Roll No 49");
}