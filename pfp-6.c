#include<stdio.h>
int main()
{
    int year;
    printf("enter any year : ");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0)
        printf("its a leapyear");
    else
        printf("its not a leapyear");
}
