#include <stdio.h>

void main(void) {
    int apples3;
    int apples2;
    int apples1;

    scanf("%d\n%d\n%d", &apples3, &apples2, &apples1);

    int apples_total = apples3 * 3 + apples2 * 2 + apples1;

    int bananas3;
    int bananas2;
    int bananas1;

    scanf("%d\n%d\n%d", &bananas3, &bananas2, &bananas1);

    int bananas_total = bananas3 * 3 + bananas2 * 2 + bananas1;

    if (apples_total > bananas_total) {
        printf("A");
    } else if (bananas_total > apples_total) {
        printf("B");
    } else {
        printf("T");
    }
}