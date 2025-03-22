#include <stdio.h>
int main() {
    int n, i,cnt;
    scanf("%d", &n);
    cnt=1;
    i=n;
    while (cnt <=6) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            cnt++;
        }
       i++;
     }
    return 0;
}
