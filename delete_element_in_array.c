#include<stdio.h>
int main()
{
    int a[10],i,count=0,n,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=m; i<n; i++)
    {
        a[i]=a[i+1];
    }
     for(i=0; i<(n-1); i++)
    {
        printf(" %d ",a[i]);
    }
}
