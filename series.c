#include<stdio.h>
// sum of series: 1-4+7-10+13-......n //
void main()
{
    int n,i,se=0,so=0,x;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<n*3;i=i+3)
    {
        if (i%2==0)
        se=se+i;
        else
        so=so+i;
    }
    x=so-se;
    printf("%d",x);

}  