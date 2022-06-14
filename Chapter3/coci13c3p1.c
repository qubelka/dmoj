#include <stdio.h>

int main(void) {
    int k;
    scanf("%d", &k);

    int a = 1, b = 0, temp_b = 0;

    for (int i = 0; i < k; i++) {
        if (a > 0) temp_b = a, a = 0;
        if (b > 0) a += b;
        b += temp_b;
        temp_b = 0;
    }

    printf("%d %d\n", a, b);
    return 0;
}