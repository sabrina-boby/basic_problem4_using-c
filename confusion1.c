#include<stdio.h>
int main()
{

    double a,b,c,o,x1,x2;
    printf("enter any three numbers :");
    scanf("%lf %lf %lf",&a,&b,&c);

    o=sqrt(b*b-4*a*c);
    x1= (-b+o)/(2*a);
    x2= (-b-o)/(2*a);

    printf("tha x1:%lf\n",x1);
    printf("tha x2:%lf\n",x2);
    return 0;
}
