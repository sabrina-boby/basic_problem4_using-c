#include<stdio.h>
int main()
{
    int x,y,z,sum;
    float avj;
    scanf("%d %d %d",&x,&y,&z);
    sum=x+y+z;
    printf("sum = %d\n",sum);
    avj=(float)sum/3;
    printf("avj = %.2f",avj);
}
