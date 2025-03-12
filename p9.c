#include <stdio.h>

int main() {
    int x, y, i, min, max;
    scanf("%d %d", &x, &y);

    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }

    i = min;
    while (i <= max) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
