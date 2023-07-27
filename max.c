#include<stdio.h>
void main()
{
    int i,n,max,ele;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements");
    max=0;
    for (i=1;i<=n;i++)
    {
        scanf("%d",&ele);
        if (ele>max)
        max=ele;
    }
    printf("\nthe largest number is %d",max);
}