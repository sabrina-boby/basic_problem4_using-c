//febonakkhi
#include<stdio.h>
int main()
{
    int m,i=0,past,present,future;
    printf("enter any numb m :");
    scanf("%d",&m);

    past=1;
    present=1;
    future=0;

    do
    {
        i++;
        printf("%d\t",future);
        past=present;
        present=future;
        future=past+present;

    }
    while(i<=m);
}
