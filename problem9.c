#include<stdio.h>

int main()
{
    char name[100];
    double x,y,o;

    gets(name);

    scanf("%lf",&x);
    scanf("%lf",&y);

    o=(15*y)/100+x;

    printf("TOTAL = R$ %.2lf\n",o);

    return 0;

}
