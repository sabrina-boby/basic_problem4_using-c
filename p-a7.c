//palindrom
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100], b[100];
  printf("enter a string :");
  gets(a);

  strcpy(b,a);
  strrev(b);

  if(strcmp(b,a)==0)
        printf("palindrom\n");
  else
        printf("not palindrom\n");
}
