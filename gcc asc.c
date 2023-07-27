#include<stdio.h>
void main()
{
int n1,n2,n3,great,small,mid;
printf("Enter the number");
scanf("%d %d %d",&n1,&n2,&n3);
great=n1;
if(great<n2)
great=n2;
else if(great<n3)
great=n3;
small=n1;
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																											if(small>n2)
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																											small=n2;
else if(small>n3)
small=n3;
if(great>n1&&n1<small)
mid=n1;
else if(great>n2&&n2<small)
mid=n2;
else
mid=n3;
printf("%d %d %d",small,mid,great);
}
