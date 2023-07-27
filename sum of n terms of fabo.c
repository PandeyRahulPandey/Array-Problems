#include<stdio.h>
void main()
{
    int n,i,count,a,b,sum,c;
    a=0,b=1,count=0,sum=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    while (count<n-2)
    {
        c=a+b;
        sum=sum+c;
        a=b;
        b=c;
        count++;
    }
    printf("%d",sum);
}