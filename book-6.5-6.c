#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,j;
    gets(a);
    for(i=0,j=4; i<=4,j>=0; i++,j--)
    {
        b[j]=a[i];
    }
    for(i=0; i<5; i++)
    {
        a[i]=b[i];
    }
    for(i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
    }
    // a[5]='\0';
    // printf("a = %s",a);
}
