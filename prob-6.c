#include<stdio.h>
int main()
{
    int t,n,i,a[5],j,sum=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[j]);

        }

        sum=a[0]+a[4];
        printf("%d",sum);
    }
}
