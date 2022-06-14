#include <stdio.h>

#define MAX_LENGTH 100

int main(void) {
    int n;
    static char yesterday[MAX_LENGTH + 1];
    static char today[MAX_LENGTH + 1];

    scanf("%d\n%s\n%s", &n, yesterday, today);

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (yesterday[i] != '.' && today[i] != '.') count++;
    }

    printf("%d\n", count);
    return 0;
}