#include<stdio.h>
int main()
{
    char a[15],b[15],m;
    int i,j,count=0;
    scanf("%s",&a);
    while(a[count]!='\0')
    {
        count++;
    }

    for(i=0; i<count; i++)
    {
        b[i]='-';
        // printf(" %c",&b[i]);
    }


    for(j=0; j<(count*2); j++)
    {
        scanf(" %c",&m);
        for(i=0; i<count; i++)
        {
            if(a[i]==m)
            {
                b[i]=m;
            }
        }
        for(i=0; i<count; i++)
        {
            printf("%c",b[i]);
        }
    }


}
