#include<stdio.h>
int main()
{
    int a,i,flage=0,b[30],j,n;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        flage=0;
        for(i=2; i<=j/2; i++)
        {
            if(j%i==0)
            {
                flage=1;
            }
        }
        if(flage==0)
        {
            b[j]=j;
        }
        else
        {
            b[j]=0;
        }
    }
    for(i=1; i<=n; i++)
    {
        printf(" %d ",b[i]);
    }

}
