#include<stdio.h>
void pf(int);
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    pf(n);
}
void pf(int x)
{
int count;
for (count=2;x>1;count++)
{
    while (x%count==0)
    {
        printf("%d",count);
        x=x/count;
    }
}
}