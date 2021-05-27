#include<stdio.h>
int main()
{
    int i,n,flage=0;
    scanf("%d",&n);
    for(i=2; i<=(n/2); i++)
    {
        if(n%i==0)
        {
            flage=1;
            break;
        }
    }
    if(flage==0)
    {
        printf("%d is a prime numb ",n);
    }
    else
    {
        printf("%d is not a prime numb",n);
    }
}
