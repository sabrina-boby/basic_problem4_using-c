#include<stdio.h>
int main()
{
    char a[100];
    int i,n,count=0,flage=0;
    scanf("%s",&a);

    while(a[count]!='\0')
    {
        count++;
    }

    printf("count = %d",count);

    for(i=0; i<(count/2); i++)
    {
        if(a[i]==a[count-i-1])
        {
            flage=1;
        }
        else
        {
            flage=0;
            break;
        }
    }
    if(flage==1)
        printf("palindrom");
    else
        printf("not palindrom");
}
