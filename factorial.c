#include<stdio.h>
int factorial(int);
void main()
{
    int n,x;
    printf("enter value of n");
    scanf("%d",&n);
    x=factorial(n);
    printf("%d",x);
}
int factorial(int a)
{
    int f=1,i;
    for (i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}