#include <stdio.h>

void main(void) {
    int W;
    int C;

    scanf("%d\n%d", &W, &C);
    printf("C.C. is ");

    if ((W >= 1 && W <= 3) && (C >= 0 && C <= 100)) {
        if (W == 3 && C >= 95) {
            printf("absolutely");
        } else if (W == 1 && C <= 50) {
            printf("fairly");
        } else {
            printf("very");
        }
        
        printf(" satisfied with her pizza.");
    }

}