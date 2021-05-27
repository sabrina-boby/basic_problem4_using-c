 #include <stdio.h>
 int main()
 {
     int n, i,l;
     scanf("%d",&l);
     for(n = 1; n <= l; n = n + 1) {
         for(i = 1; i <= 10; i = i + 1) {
             printf("%d X %d = %d\n", n, i, n*i);
         }
         printf("\n");
     }
     return 0;
 }
