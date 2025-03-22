#include <stdio.h>
int main() {
int n,a,i;
    scanf("%d", &n);
    i=1;
    a=0;
   while (i<n) {
       if(n%2==0){
        a=1;
        break;
        }
      i++;
     }
     if(a==1){
         printf("No");
      }
      else if(a!=1 ||n==1){
         printf("Yes");
      }
    return 0;
}
