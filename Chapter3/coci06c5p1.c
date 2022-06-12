#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 51

void main(void) {
    char input[MAX_LENGTH];
    fgets(input, MAX_LENGTH, stdin);

    int P = 1;

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == 'A') {
            if (P == 1) {
                P = 2;
            } else if (P == 2) {
                P = 1;
            }
        } else if (input[i] == 'B') {
            if (P == 2) {
                P = 3;
            } else if (P == 3) {
                P = 2;
            }
        } else if (input[i] == 'C') {
            if (P == 1) {
                P = 3;
            } else if (P == 3) {
                P = 1;
            }
        }
    }

    printf("%d", P);

}