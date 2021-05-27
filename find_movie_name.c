#include<stdio.h>
int main()
{
    char movie[15], b[15], m;
    int i,j,count=0;
    scanf("%s",&movie);

    while(movie[count]!='\0')
    {
        count++;
    }

    for(i=0; i<count; i++)
    {
        b[i]='-';
    }

    for(i=0; i<count*2; i++){
        scanf(" %c",&m);

        for(i=0; i<count; i++)
        {
            if(movie[i]==m)
            {
                b[i]=m;
            }
        }
        for(i=0; i<count; i++)
        {
            printf("%c",b[i]);
        }
         printf("\n");
    }
}

//mobo
//o
//----
//-o-o
//mo-o
//b
//mobo
