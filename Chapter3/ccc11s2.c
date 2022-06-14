#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 20000

int main(void) {
    int n;
    scanf("%d\n", &n);
    static char input[MAX_LENGTH + 1];

    int correct = 0, ch = 0, i = 0;

    while((ch = getchar()) != EOF) {
        if (i < 2*n && isalpha(ch)) {
            input[i++] = ch;
        }
    }
    input[i] = '\0';

    for (int i = 0; i < n; i++) {
        if (input[i] == input[i+n]) {
            correct++;
        }
    }

    printf("%d\n", correct);
    return 0;
}