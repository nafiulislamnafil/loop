#include <stdio.h>
int main() {
int n,ld,s;
scanf("%d", &n);
s=0;
    while(n!=0){
        ld=n%10;
        n=n/10;
        s=s+ld;
     }
  printf("%d",s);
return 0;
}
