#include<stdio.h>
int main()
{
    int a,n,i,flage=0, store[100], j;

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
            store[j] = j;
        }
        else
        {
            store[j] = 0;
        }
    }
    for(i=1; i<=n; i++)
    {
        printf("%d ", store[i]);
    }

}
