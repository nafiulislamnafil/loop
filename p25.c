#include <stdio.h>
int main() {
    int n, ld,s,multi;
    s = 0;
    multi = 1;
    scanf("%d", &n);

    while (n != 0) {
        ld = n % 2;
        n = n / 2;
        s = s + ld * multi;
        multi *= 10;
    }

    printf("%d\n", s);
    return 0;
}
