#include <stdio.h>

void main(void) {
    int Y;
    int M;

    scanf("%d\n%d", &Y, &M);
    printf("%d", M + (M-Y));
}