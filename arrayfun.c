#include<stdio.h>
int mult(int[],int);
void main()
{
    int n,a[50],i,m;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=mult(a,n);
    printf("%d",m);

}
int mult(int x[],int r)
{
    int s=1,i;
    for (i=0;i<r;i++)
    {
        s=s*x[i];
    }
    return s;
}