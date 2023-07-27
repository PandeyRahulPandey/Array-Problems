#include<stdio.h>
int sum(int);
void main()
{
   int a, n, count=1,i;
   printf("enter the value of n:");
   scanf("%d",&n);
    for (i=1;i<n;i=i++)
    {
        count=count+2;
        
    }
    a=sum(count);
    printf("%d",a);

    
}
int sum(int x)
{
    
    int s;
    if (x==1)
    return x;
    else 
    s=x+sum(x-2);
    return s;
}