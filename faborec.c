#include<stdio.h>
void fab(int);
void main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    fab(n);
    printf("\nName-Rahul Pandey,Section-N,Roll Number-49");
}
void fab(int x)
{
    int a=0,b=1,c;
    printf("%d%d",a,b);
    while (x-2>0)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        x=x-1;
    }
}