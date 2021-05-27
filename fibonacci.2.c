#include<stdio.h>
int main()
{
    int a,i,present=1,previous=0,future=1;
    scanf("%d",&a);
     for(i=1; i<=a; i++)
     {
        printf(" %d ",future);

        future=previous+present;
        previous=present;
        present=future;

     }
}
