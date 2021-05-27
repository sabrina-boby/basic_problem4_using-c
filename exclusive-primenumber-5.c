#include<stdio.h>
int main()
{
    int a,n,count=0,j,i,b[30];
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        count=0;
        for(i=2; i<=j/2; i++)
        {
            if(j%i==0)
            {
                count=1;
            }
        }

        if(count==0)
        {
            b[j]=j;
        }
        else
        {
            b[j]=0;
        }
        // printf(" %d ",b[j]);
    }


    for(j=1; j<=n; j++)
    {
        if(b[j]!=0)
        {
            printf("%d : prime number\n",j);
        }
    }
}
