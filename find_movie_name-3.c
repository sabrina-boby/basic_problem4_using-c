#include<stdio.h>
int main()
{
    char a[15],b[15],c;
    int i,j,count=0;
    scanf("%s",&a);
    while(a[count]!='\0')
    {
        count++;
    }

    for(i=0; i<count; i++)
    {
        b[i]='-';
    }

    for(i=0; i<count*2; i++)
    {
        scanf(" %c",&c);
        for(i=0; i<count; i++)
        {
            if(a[i]==c)
            {
                b[i]=c;
            }
        }
        for(i=0; i<count; i++)
        {
            printf("%c",b[i]);
        }
        printf("\n");
    }


}
