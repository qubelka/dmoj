#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void) {
    int n;

    scanf("%d", &n);
    printf("A long time ago in a galaxy far");
    for (int i = 1; i < n; i++) {
        printf(", far");
    }
    
    printf(" away...");
}