#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
      scanf("%d",&m);
      if(m%2==0)
        printf("even\n");
      else
        printf("odd\n");
    }
}
