#include<stdio.h>
void main()
{
    int a[3][3],n,i,j,sr,sc;
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
        sr=0,sc=0;
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            
            sr=sr+a[i][j];
            sc=sc+a[j][i];
            
        }
        
        printf("sr=%d,sc=%d",sr,sc);
        printf("\n");
    }
    
}
    
