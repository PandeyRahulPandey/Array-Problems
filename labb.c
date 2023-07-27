#include<stdio.h>
void main()
{
    int n,rem,fact=1,sum=0,i;
    printf("enter the value of n");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        for (i=1;i<=rem;i++)
        {
            fact=fact*i;

        }
        n=n/10;
        sum=sum+fact;
        
    }
    if (n==sum)
    printf("number is strong");
    else 
    printf("not strong ");

    
}