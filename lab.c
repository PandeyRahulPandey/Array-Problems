#include<stdio.h>
void main()
{
    int i,n1,n2,x,sum=0;
    printf("enter the values of n1, n2");
    scanf("%d%d",&n1,&n2);
    for (i=1;i<=((n2-n1)-1);i++)
    {
        x=n1+i;
        if (x%2==0)
        {
            sum=sum+x;
            /* code */
        }
        
    }
printf("%d",sum);
}