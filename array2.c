#include<stdio.h>
int main()
{
    int a[50],n,i,s=0;
    printf("enter the number of elements you want to input in the array:");
    scanf("%d",&n);
    printf("\n enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if (a[i]%2==0)
    {
    
    printf("%d",a[i]);
    }
}