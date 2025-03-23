#include <stdio.h>
int main() {
int a,i,b,gcd;
    scanf("%d%d", &a,&b);
    i=1;
   while (i<=a&&i<=b) {
        if(a%i==0&&b%i==0){
                gcd=i;
        }
      i++;
   }
   printf("%d",gcd);
    return 0;
}

