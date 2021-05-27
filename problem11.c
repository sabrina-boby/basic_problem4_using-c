#include<stdio.h>
int main()
{

    double R,m,o;
    scanf("%lf",&R);

    m= R*R*R;
    o=(4/3.0)*3.14159*m;

    printf("VOLUME = %.3lf\n",o);
    return 0;
}
