#include<stdio.h>
int main()
{
    int n,i,flage=0;
    scanf("%d",&n);
    for(i=2; i<(n/2); i++)
    {
        if(n%i==0)
        {
          flage=1;
          break;
        }
    }
    if(flage==1)
        printf("not primenumber");
    else
        printf("primenumber");
}
