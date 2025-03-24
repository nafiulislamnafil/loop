#include <stdio.h>
int main() {
    int i , n;
    scanf("%d", &n);
        i = 1;
    while (i > 0) {
        if (n == 1) {
            printf("%d ", n);
            break;
        }
        if (n % 2 != 0) {
            printf("%d ", n);
             n = 3 * n + 1;
        } 
        else {
            printf("%d ", n);
            n = n / 2;
        }
        i++;
    }
    return 0;
}
//another way
#include <stdio.h>
int main() {
int ,n;
    scanf("%d",&n);
   while (n>=1) {
        if(n==1){
              printf("%d ",n);
              break;
        }
        if(n%2!=0){
            printf("%d ",n);
            n=3*n+1;
         }
         if (n%2==0){
            printf("%d ",n);
            n=n/2;
                }
   }
    return 0;
}
