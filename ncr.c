#include<stdio.h>
    int fac(int,int);
    int factn(int);
    int factr(int);
    int factnr(int,int);

void main()
{
    int n,r,a;
    printf("enter the value of n,r:");
    scanf("%d%d",&n,&r);
    a=fac( n, r);
    printf("%d",a);

}
int fac(int n,int r)
{
    int x;
    x=factn(n)/(factnr(n,r)*factr(r));
    return x;
}
int factn(int n)
{
    int i,f=1;
    for (i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int factnr(int n,int r)
{
    int i,ff=1;
    for (i=1;i<=(n-r);i++)
    {
        ff=ff*i;
    }
    return ff;
}
int factr(int r)
{
    int i,fff=1;
    for (i=1;i<r;i++)
    {
        fff=fff*i;
    }
    return fff;
}