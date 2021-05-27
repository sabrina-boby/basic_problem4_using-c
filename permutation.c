#include<stdio.h>
int main()
{
    int a,n,m,i,j,k,gun1=1,gun2=1;
    float vag;
    printf("Enter 2 numb :");
    scanf("%d",&n);
    scanf("%d",&m);
    k=(n-m);
    printf("k = %d",k);

    for(i=n; i>0; i--)
    {
        gun1=gun1*i;

    }
    for(j=k; j>0; j--)
    {
        gun2=gun2*j;
    }
    vag=(gun1/gun2);
    printf("vag = %.2f",vag);
}
