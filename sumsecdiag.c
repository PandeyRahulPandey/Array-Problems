#include<stdio.h>
void main()
{
    int a[3][3],i,j,r;
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
            if (i+j==2)
            a[i][j]=a[i][j]*a[i][j];
            
        }
        
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}