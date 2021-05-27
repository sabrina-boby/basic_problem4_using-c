#include<stdio.h>
int main()
{
    char a[10],t,z;
    int i,count=0;
    gets(a);

    while(a[count]!='\0')
    {
        count++;
    }
    z=(count/2);
    for(i=0; i<z; i++)
    {
        t=a[count-1-i];
        a[count-1-i]=a[i];
        a[i]=t;
    }
    for(i=0; i<count; i++)
    {
        printf("%c",a[i]);
    }
}
