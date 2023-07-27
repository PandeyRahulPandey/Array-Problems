#include<stdio.h>
int main()
{
    int a[50],n,i,p=0,ne=0,no=0;
    printf("enter the number of elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]>0)
        p++;
        if (a[i]<0)
        ne++;
        if (a[i]==0)
        no++;
    }
    printf("the number of positive elements are:%d\n",p);
    printf("the number of negative elements are:%d\n",ne);
    printf("the number of elements which are equal to zero are:%d\n",no);

}