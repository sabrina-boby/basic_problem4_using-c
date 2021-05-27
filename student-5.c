#include<stdio.h>
int main()
{
    int a,b,i,sum;
    scanf("%d",&a);
    for(i=0; i<10; i++)
    {
        sum=sum+a;
        printf("%d * %d = %d\n",a,i,sum);
    }

}
