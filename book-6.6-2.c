#include<stdio.h>
int main()
{
    char a[10],t;
    int i,j,z;
    gets(a);
    z=(6/2);
    for(i=0,j=5; i<z; i++,j--)
    {
        t=a[j];
        a[j]=a[i];
        a[i]=t;
    }
    for(i=0; i<6; i++)
    {
        printf("%c",a[i]);
    }
}

