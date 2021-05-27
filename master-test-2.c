#include<stdio.h>
int main()
{
    int n,m,ans;
    scanf("%d %d",&n,&m);
    ans = ((n*(n+1)) - (m*(m+1)))/2;
    printf("%d\n", ans + m);

}
