#include<stdio.h>
int main()
{
    int i,j;
    char a[5],b[5];
    scanf("%s",&a);
    for(i=0,j=4; i<5,j>=0; i++,j--)
    {
        b[j]=a[i];
    }
    b[5]='\0';
    printf("%s",b);
}
