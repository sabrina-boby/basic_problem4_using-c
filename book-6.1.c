#include<stdio.h>
int main()
{

    float a,b,c,M,x,y,z;
    scanf("%f %f %f",&a,&b,&c);
    x=(25*a)/100;
    y=(25*b)/100;
    z=(50*c)/100;
    M=x+y+z;
    printf("result = %.2f",M);
}
