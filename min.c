#include<stdio.h>
void main()
{
    int i,n,min,ele;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements");
    min=100000000;
    for (i=1;i<=n;i++)
    {
        scanf("%d",&ele);
        if (ele<min)
        min=ele;
    }
    printf("\nthe smallest number is %d",min);
}