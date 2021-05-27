#include<stdio.h>
int main()
{
    double a,b,c,o,k,n,l,m;

    scanf("%lf%lf%lf",&a,&b,&c);

    o=(1.0/2)*a*c;
    printf("TRIANGULO: %.3lf\n",o);

    k=(3.14159)*c*c;
    printf("CIRCULO: %.3lf\n",k);

    n=(1.0/2)*(a+b)*c;
    printf("TRAPEZIO: %.3lf\n",n);

    l=(b*b);
    printf("QUADRADO: %.3lf\n",l);

    m=(a*b);
    printf("RETANGULO: %.3lf\n",m);

    return 0;

}
