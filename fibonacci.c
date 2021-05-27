#include<stdio.h>
int main()
{
    int i,n,j=0, present=1, previous=0, final_number=0;
    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        printf(" %d ",present);

        final_number = present + previous;
        previous = present;
        present = final_number;

    }
}
