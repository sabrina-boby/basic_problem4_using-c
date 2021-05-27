#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%4)
        printf("%d\n",--n);
    else
        printf("%d\n",++n);

}
