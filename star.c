#include<stdio.h>
void main()
{
    int r,i,j;
    printf("enter the nunber of rows");
    scanf("%d",&r);
    for (i=1;i<=r;i++)
    { 
        for (j=r;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}