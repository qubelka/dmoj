#include <stdio.h>

void main(void) {
    int first;
    int second;
    int third;
    int fourth;

    scanf("%d\n%d\n%d\n%d", &first, &second, &third, &fourth);

    if (second == third &&
    (first == 8 || first == 9) &&
    (fourth == 8 || fourth == 9)) {
        printf("ignore");
    } else {
        printf("answer");
    }
}