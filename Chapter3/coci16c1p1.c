#include <stdio.h>

int main(void) {
    int x, n;
    scanf("%d\n%d", &x, &n);
    
    int a = x;
    int used;

    for (int i = 0; i < n; i++) {
        scanf("%d", &used);
        a += (x - used);
    }

    printf("%d\n", a);
    return 0;
}