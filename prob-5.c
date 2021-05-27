#include<stdio.h>
int main()
{
    int i,j,n,t,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%d",&n);
        if(t>0)
        {
          printf("\n");
        }
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
