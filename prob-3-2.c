#include<stdio.h>
int main()
{
    int i,j;
    for(i=100; i>=1; i--)
    {
        printf("%d\t",i);
        for(j=96; j>=1; j=j-5)
        {
            if(i!=j)
            {
                printf("\n");
            }

        }
    }
}
