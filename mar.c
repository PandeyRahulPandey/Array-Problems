#include<stdio.h>
void main()
{
int m1,m2,m3,m4,p;
char ch
printf("enter the marks of 4 subjects");
scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
p=(m1+m2+m3+m4/4)*100;
if(p>=85)
{
printf("grade A %d",p); 
}
else if(ch>=48&&ch<=57)
{
printf("digit %c",ch);
}
else
{
printf("special character %c",ch); 
}
}