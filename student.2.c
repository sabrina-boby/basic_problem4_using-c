#include<stdio.h>
int main()
{
    int a,b,jog,biyog,gon;
    float vag;
    scanf("%d%d",&a,&b);
    jog=a+b;
    biyog=a-b;
    vag=(float)a/b;
    gon=a*b;
    printf("%d+%d=%d\n %d-%d=%d\n %d/%d=%f\n %d*%d=%d\n",a,b,jog,a,b,biyog,a,b,vag,a,b,gon);
    return 0;
}

