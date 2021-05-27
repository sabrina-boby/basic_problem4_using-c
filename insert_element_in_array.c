#include<stdio.h>
int main()
{
    int a[10],n,m,x,i,j;
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);//index numb
    scanf("%d",&m);//value

    for(j=x; j>=n; j--)
    {
        a[j]=a[j-1];
    }

    a[n]=m;
    for(j=0; j<x; j++)
    {
        printf(" %d ",a[j]);
    }
}
