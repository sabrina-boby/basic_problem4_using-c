#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x<y && z<y)
        printf("%d eh o maior\n",y);
    else if (y<x && z<x)
        printf("%d eh o maior\n",x);
    else
        printf("%d eh o maior\n",z);

}
