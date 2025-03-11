#include <stdio.h>
int main() {
    int x,i,cnt;
    scanf("%d", &x);
    i=x;
    cnt=0;
    while(cnt<6){
       if(i%2!=0) {
        printf("%d\n", i);
        cnt++;
       }
     i++;
    }
    return 0;
}
