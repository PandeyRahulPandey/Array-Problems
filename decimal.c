#include<stdio.h>
int dec(int);
void main()
{
int n,x;
printf("enter the number");
scanf("%d",&n);
x=dec(n);
printf("%d",x);
}
int dec(int a)
{
int t,j=1,i,sum=0;
t=a;
while (t!=0)
{
    i=t%2;
    sum=sum+(i*j);
    t=t/2;
    j=j*10;
}
return sum;
}
