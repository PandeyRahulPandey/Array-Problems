#include<stdio.h>
void main()
{
    int a[10],n,i,max,min;
    printf("how many elements you want to input in array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0],min=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>max)
        max=a[i];
        if (a[i]<min)
        min=a[i];
    }
    printf("the largest element of array is:%d\n",max);
    printf("the smallest element of array is:%d",min);
    printf("\nRahul Pandey,sectionN,Roll No 49");
}