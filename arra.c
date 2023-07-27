#include<stdio.h>
void main()
{
int a[50],i,n;
printf("enter the number of elements you want to input:");
scanf("%d",&n);
printf("enter the elements of arrays:");
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for (i=4;i>=0;i--)
{
    printf("%d",a[i]);
}
}