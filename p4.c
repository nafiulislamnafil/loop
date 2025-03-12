#include <stdio.h>
int main() {
    int N, i = 1;
    scanf("%d", &N);
    while (i <= N) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
