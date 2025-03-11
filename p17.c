#include <stdio.h>
int main() {
int n,cnt;
scanf("%d", &n);
cnt=0;
    while(n>1){
        n=n/2;
        cnt++;
    }
 printf("%d",cnt);
return 0;
}
