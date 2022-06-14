#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100000

int main(void) {
    static char input[MAX_LENGTH + 1];
    scanf("%s", input);
    int count = 0, i = 0, j = 0;
    char honi[] = "HONI";

    while (i < strlen(input)) {
        if (honi[j] == input[i]) {
            if (j == 3) j = 0, count++; else j++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}