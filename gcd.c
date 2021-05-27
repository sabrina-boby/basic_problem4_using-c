#include<stdio.h>
int main()
{
    int a,b,gcd,k,i;
    scanf("%d %d",&a,&b);
    if(a==0)
    gcd=a;
    else if(b==0)
    gcd=b;
    else
    {
        printf("i am here \n");
        if(a<b)
            k=a;

        else
            k=b;

        printf("k = %d\n",k);

        for(i=1; i<=k; i++)
        {
            if(a%i==0 && b%i==0)
            {
                printf("rayhan jaan %d\n",i);
                gcd=i;
            }

        }
    }
     printf("\ngcd = %d",gcd);

}
