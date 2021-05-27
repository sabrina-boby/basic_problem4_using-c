#include<stdio.h>
int main()
{
    int n,i,j,m,k;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        int sum=0;

        for(j=0; j<m; j++)
        {
            scanf("%d",&k);
            sum=sum+k;
        }
        printf("%d\n",sum);

        if(i!=n)
        {
           printf("\n");
        }

    }
}
