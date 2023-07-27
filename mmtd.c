#include<stdio.h>
void main()
{
    int a[3][3],i,j,max,min;
    printf("enter the elements of array:");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for (i=0;i<3;i++)
    {
         max=a[0][0];
        
        for (j=0;j<3;j++)
        {
            if (a[i][j]>max)
            max=a[i][j];
            
        }
        printf("the largest element of row is:%d\n",max);
        
    }
}