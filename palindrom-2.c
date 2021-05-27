#include<stdio.h>
int main()
{
    char a[20];
    int i,count=0,same=0, z;
    scanf("%s",&a);
    while(a[count]!='\0')
    {
        count++;
    }
    z = (count/2);
    for(i=0; i<=z; i++)
    {
        if(a[i]==a[count-1-i])
        {
          same=0;
        }
        else
        {
          same=1;
          break;
        }
    }
    if(same==1)
    {
        printf("not palindrom");
    }
    else
    {
        printf("palindrom");
    }

}
