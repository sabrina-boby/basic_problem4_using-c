#include<stdio.h>
int main()
{
    int a[10],b[10],i,j;
    printf("Enter a : ");
    for(i=0; i<=10; i++)
    {
        scanf(" %d",&a[i]);
    }
    for(i=10; i>0; i++)
    {
        b[j]=a[i];
        printf("\n%d ",b[j]);
    }
}
