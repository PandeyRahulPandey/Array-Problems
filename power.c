#include<stdio.h>
void power(int,int);
void main()
{
    int a;
    int b;
    printf("\nenter two numbers:");
    scanf("%d%d",&a,&b);
    power(a,b);
}
void power(int a,int b)
{
    int i;
    int p=1;
    for(i=1;i<=b;i++)
    p=p*a;
    printf("%d",p);
}