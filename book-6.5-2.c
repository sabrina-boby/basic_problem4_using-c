#include<stdio.h>
int main()
{
    int a[10],d[10],i,j;
    printf("Enter a : ");
    printf("\nprintf a\n");
    for(i=0; i<=9; i++)
    {
        scanf(" %d",&a[i]);
    }
    for(i=0,j=9; i<=9,j>=0; i++,j--)
    {
        d[j]=a[i];
    }
    printf("\nreverse a\n");
    for(i=0; i<=9; i++)
    {
        a[i]=d[i];
       printf("%d ",a[i]);
    }
}
