#include<stdio.h>
int main()
{
    int i,n,flage=0,z;
    scanf("%d",&n);
    z=(n/2);
    for(i=2; i<=z; i++)
    {
       if(n%i==0)
       {
         flage=1;
         break;
       }
    }
    if(flage==0)
        printf("prime number");
    else
        printf("not prime number");
}





