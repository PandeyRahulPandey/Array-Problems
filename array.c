#include<stdio.h>
void main()
{
    int a[50],n,s=0,i;
    
    printf("\nenter the elements of array");
    for (i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<4;i++)
    {
        s=s+a[i];
    }
    printf("the sum is %d",s);
}