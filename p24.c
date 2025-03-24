#include <stdio.h>
int main() {
    int i,n,a,cnt,s;
    scanf("%d", &n);
    i=1;
    cnt = 0;
    s = 0;
    while(i<=n){
            scanf("%d", &a);
            cnt++;
            if(cnt<=n){
                s=s*0+a;        //not use it
                printf("%d",s);// printf("%d",a); output will be
            }                                                           // same
         i++;
     }
    printf("%d",s*s);
    return 0;
}
