#include<stdio.h>
int main()
{
    int a[15],i,x,y,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);//index
    scanf("%d",&y);//value
    for(i=n; i>=x; i--)
    {
        a[i]=a[i-1];
    }
    a[x]=y;
    for(i=0; i<=n; i++)
    {
        printf(" %d ",a[i]);
    }
}
