#include<stdio.h>
int main()
{
    char k;
    scanf("%c",&k);
    if(k>='a' && k<='z')
        printf("it is small later");
    else if(k>='A' && k<='Z')
        printf("its capital latter");

}
