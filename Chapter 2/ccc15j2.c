#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

void main(void) {
    char input[MAX_LENGTH];
    char happy[] = ":-)";
    char sad[] = ":-(";

    fgets(input, MAX_LENGTH, stdin);

    int happy_count = 0;
    int sad_count = 0;

    if (strlen(input) < 3) {
        printf("none");
    } else {
        for (int i = 0; i < strlen(input)-2; i++) {
            char substr[4];
            memcpy(substr, &input[i], 3);
            substr[3] = '\0';
            if (strcmp(substr, happy) == 0) {
                happy_count += 1;
            } else if (strcmp(substr, sad) == 0) {
                sad_count += 1;
            }
        }

        if (happy_count > sad_count) {
            printf("happy");
        } else if (happy_count < sad_count) {
            printf("sad");
        } else if (happy_count == 0 && sad_count == 0) {
            printf("none");
        } else {
            printf("unsure");
        }
    }
}