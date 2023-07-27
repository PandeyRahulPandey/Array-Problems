#include<stdio.h>
void main()
{
    int a[10]={34,58,64};
    int b[5]={13,56,88,100};
    int c[20];
    int i,j,n1,n2,k;
    i=j=k=0;
    n1=3,n2=4;
    while (i<n1&&j<n2)
    {
        if (a[i]<b[j])
        c[k++]=a[i++];
        else 
        c[k++]=b[j++];
    }
    if(i<n1)
    {
        while (i<n1)
        c[k++]=a[i++];
    }
    else
    {
        while(j<n2)
        c[k++]=b[j++];
    }
    printf("\nafter marging\n");
    for (i=0;i<k;i++)
    printf("\n%d",c[i]);
}