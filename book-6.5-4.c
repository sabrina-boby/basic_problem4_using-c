#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,j;
    gets(a);

    for(i=0,j=9; i<10,j>=0; i++,j--)
    {
        b[j]=a[i];
    }

    b[10] ='\0';
    printf("\n = %s ",b);
}


