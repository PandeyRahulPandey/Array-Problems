#include<stdio.h>
void main()
{
    int r,i,j,n,k;
    printf("enter the nunber of rows");
    scanf("%d",&r);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<i;j++)
        {
            printf(" ");
        }
        for (k=i;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}