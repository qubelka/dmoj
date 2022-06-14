#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int read_line(char str[], int n);

int main(void) {
    int n;
    scanf("%d\n", &n);
    char input[MAX_LENGTH + 1];

    int t_count = 0;
    int s_count = 0;

    for (int i = 0; i < n; i++) {
        read_line(input, MAX_LENGTH + 1);
        char* p = input;
        while (*p != '\0') {
            if (tolower(*p) == 's') s_count++;
            if (tolower(*p) == 't') t_count++;
            p++;
        }
    }

    if (t_count > s_count) printf("English\n"); else printf("French");
    return 0;
}

int read_line(char str[], int n) {
    int ch = 0, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}