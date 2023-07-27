#include<stdio.h>
int sum(int);
int main()
{
    int num,x;
    printf("enter the number:");
    scanf("%d",&num);
    x=sum(num);
    printf("%d",x);
    printf("\nName-Rahul Pandey,Section-N,Roll Number-49");
    
    return 0;
}
int sum(int r)
{
    int s,rem;
    if (r!=0)
    {
        rem=r%10;
        s=rem+sum(r/10);
    }
    else
    return 0;
    return s;
}