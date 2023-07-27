#include<stdio.h>
void fabi();
void main()
{
    fabi();

}
void fabi()
{
    int n,a=0,b=1,c;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    while (n-2>0) 
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        n=n-1;
    }
    
}