#include<stdio.h>
int main()
{
    int n,m,i,k,gun=1;
    printf("Enter 2 numb :");
    scanf("%d",&n);
    scanf("%d",&m);
    k=(n-m);
    for(i=n; i>k; i--)
    {
        gun=gun*i;

    }
    printf("result = %d",gun);
}

