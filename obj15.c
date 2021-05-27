#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,p1,p2,m,o1,o2;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    p1=(x2-x1)*(x2-x1);

    p2=(y2-y1)*(y2-y1);

    m=sqrt(p1+p2);
    printf("%.4lf\n",m);
}
