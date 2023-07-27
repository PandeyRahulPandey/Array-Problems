#include<stdio.h>
int reverse(int sum)
int rev=0,rem;
while (sum>0)
{
    rem=sum%10;
    rev=rev*10+rem;
    sum=sum/10;

}
return rev;


void main()
{
    int n,r,sum=0,temp,result;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    result=sum*rev(sum);
    if (result==temp)
    printf("magic number");
    else
    printf("not magic number");
}