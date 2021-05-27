#include<stdio.h>
int main()
{
    char a[15],b[15],m;
    int i,j,count=0, flage=0;
    scanf("%s",&a);
    while(a[count]!='\0')
    {
        count++;
    }
    for(i=0; i<count; i++)
    {
        b[i]='-';
    }
    for(j=0; j<count*2; j++)
    {
        scanf(" %c",&m);
        for(i=0; i<count; i++)
        {
            if(a[i]==m)
            {
                b[i]=m;
            }
        }

        flage = 0;
        for(i=0; i<count; i++)
        {
            if (b[i] == '-')
            {
                flage=1;
            }
        }

        printf("\n");

        if (flage == 0)
        {
            break;
        }

    }

}
