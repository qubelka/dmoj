#include <stdio.h>

void main(void) {
    int month;
    int day;

    scanf("%d\n%d", &month, &day);

    if (month < 2) {
        printf("Before");
    } else if (month > 2) {
        printf("After");
    } else {
        if (day < 18) {
            printf("Before");
        } else if (day > 18) {
            printf("After");
        } else {
            printf("Special");
        }
    }
}