#include<stdio.h>
int main()
{
    int a,b,d,e;
    float c,f,m,n,o;
    scanf("%d%d%f",&a,&b,&c);
    scanf("%d%d%f",&d,&e,&f);

    m=b*c;
    n=e*f;
    o=m+n;

    printf("VALOR A PAGAR: R$ %.2f\n",o);
}
