#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter first number ");
scanf("%d",&a);
printf("\n enter second number ");
scanf("%d",&b);
printf("\n enter third number ");
scanf("%d",&c);
if(a<b && a<c)
{
printf("\n minimum is %d ",a);
}
else if(b<a && b<c)
{
printf("\n minimum is %d ",b);
}
else
{
printf("\n minimum is %d ",c);
}
return 0;
}