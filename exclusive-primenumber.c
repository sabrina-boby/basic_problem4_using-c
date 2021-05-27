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
        if(flage==1)
        {
            printf("%d = not prime number\n",j);
        }
        else
        {
            printf("%d = prime number\n", j);
        }

    }
}
