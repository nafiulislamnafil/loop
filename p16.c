#include <stdio.h>
int main() {
    int i,a,b,s;
    scanf("%d%d", &a,&b);
    i=1;
    s=1;
    while(i<=b){
      s=s*a;
     i++;
    }
    printf("%d",s);
    return 0;
}
