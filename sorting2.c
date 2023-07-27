#include<stdio.h>
void main()
{
    int a[50],b[50],c[50], n,p,i,j,k,s;
    printf("how many elements you want to input in the array:");
    scanf("%d",&n);
    printf("entet the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("how many elements you wnt to input:");
    scanf("%d",&p);
    printf("enter the elements");
    for (i=0;i<p;i++)
    {
        scanf("%d",&b[i]);
    }
    s=n+p;
    i=j=k=0;
    while (i<n && j<p)
    {
        if (a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else 
        {
            c[k]=b[j];
            j++;
        }
        k++;
        
    }
    if (i==n)
    {
        while (j<p)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    else if (j==p)
    {
        while (i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    printf("\n the required merged array is:");
    for (i=0;i<s;i++)
    printf("\n %d",a[i]);
}
        
        
    

