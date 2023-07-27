#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum=0;
    printf("enter the elements of matrix:");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (i==j)
            printf("%d",a[i][j]);
        }
    }
    
}