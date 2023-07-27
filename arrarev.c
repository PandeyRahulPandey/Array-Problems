#include<stdio.h>
void main()
{
    int a[50],i,n;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of araay:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=n-1;i>=0;i--)
    {
        printf("the reverse elements of array at index:%d is:%d\n",i,a[i]);

    }
    printf("\nRahul Pandey,sectionN Roll No 49");
}
