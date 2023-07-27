#include<stdio.h>
int power(int,int );
void main()
{
    int p,a,b;
    printf("enter a,b:");
    scanf("%d%d",&a,&b);
    p=power(a,b);
    printf("%d",p);
    printf("\nName-Rahul Pandey,Section-N,Roll Number-49");
}
int power(int x,int y)
{
    if (y==0)
    return 1;
    return x*power(x,y-1);
}