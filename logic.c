#include<stdio.h>
void main()
{
   int i,space,rows,j;
   printf("enter number of rows");
   scanf("%d",&rows);
   for (i=1;i<=rows;i++)
   {
      for (space=1;space<=(rows-i);space++)
      {
         printf("  ");
      
         for ( j=1;j<=i;j++)
         {
            printf("*");
         }
      }
         printf("\n");  
      
   }                  
}

         



