#include <stdio.h>
int main() {
int n,i,a,ld;
scanf("%d", &n);
i=1;
a=0;
    while(n!=0){
        ld=n%10;
        if(ld==4||ld==7){
               a=1;
              break;
          }
         n=n/10;
         i++;
    }
    if (a==1){
            printf("lucky");
        }
    else {
            printf("not lucky");
        }
return 0;
}
