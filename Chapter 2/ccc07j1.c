#include <stdio.h>

void main(void) {
    int A;
    int B;
    int C;

    scanf("%d\n%d\n%d", &A, &B, &C);
    
    if (A <= B) {
        if (C >= B) {
            printf("%d", B);
        } else if (A >= C) {
            printf("%d", A);
        } else {
            printf("%d", C);
        }
    } else if (B <= A) {
        if (C >= A) {
            printf("%d", A);
        } else if (B >= C) {
            printf("%d", B);
        } else {
            printf("%d", C);
        }
    }
}