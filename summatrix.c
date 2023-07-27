#include<stdio.h>
void main()
{
    int a[2][2],i,j,avg,sum=0;
    printf("enter the elements of matrix:");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
            avg=sum/4;
        }
        printf("\n");
    }
      printf("the sum of elements of matrix is:%d",sum);
      printf("\nthe average of the elements of matrix is:%d",avg);
      for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
          if (a[i][j]>avg)
          printf("\nthe element greater than average is:%d",a[i][j]);
        }
    }
     
}