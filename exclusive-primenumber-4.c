#include<stdio.h>
int main()
{
    int a[10],n,count=0,i,j,b[50],p;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        count=0;
        for(i=2; i<=j/2; i++)
        {
            if(j%i==0)
            {
                count=1;
                break;
            }
        }

        if(count==1)
        {
           b[j]=0;
        }
        else
        {
           b[j]=j;
        }
    }
    for(p=1; p<=n; p++)
    {
      printf(" %d ",b[p]);
    }
}
