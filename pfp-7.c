#include<stdio.h>
int main()
{
    int numb,i,count=0;
    printf("enter any number : ");
    scanf("%d",&numb);
    for(i=2; i<numb; i++)
    {
        if(numb%i==0)
        {
            count++;
            break;
        }
        else
            count==0;
    }

    if (count==0)
        printf("its a prime numb ");
    else
        printf("its not a prime numb ");
}
