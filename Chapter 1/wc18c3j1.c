#include <stdio.h>

void main(void) {
    int P;
    int B;
    int D;

    scanf("%d\n%d\n%d", &P, &B, &D);
    int leftover_paint = P % B;
    int painted_badges_revenue = (int)((P-leftover_paint) / B) * D;

    printf("%d", painted_badges_revenue + leftover_paint);
}