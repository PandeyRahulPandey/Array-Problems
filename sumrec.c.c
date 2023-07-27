#include<stdio.h>
int sum(int);
void main()
{
    int n,r;
    printf("enter the value of n:");
    scanf("%d",&n);
    r=sum(n);
    printf("%d",r);
    printf("\nName-Rahul Pandey,Section-N,Roll Number-49");
}
int sum(int x)
{
    int s;
    if (x==1)
    return x;
    s=x+sum(x-1);
}