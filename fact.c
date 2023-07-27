#include<stdio.h>
int fact(int);
int main()
{
int s;
fact(int);
s=factorial;
printf("%d",s);
}
int fact(int)
{
    int i,n,factorial=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return (factorial);
}

