#include<stdio.h>
int main()
{
    int a[15],i,j,n,t;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<(n/2); i++)
    {
        t=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=t;
    }

    for(j=0; j<n; j++)
    {
        printf("%d ",a[j]);
    }
}
// 10 20 30 40 50 60 70 80 90 100
