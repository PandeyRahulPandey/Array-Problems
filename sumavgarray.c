#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0;
    float avg;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("the sum of array is:%d\n",sum);
    printf("the average of array is:%f",avg);
    printf("\nRahul Pandey,sectionN,Roll No 49");
}
