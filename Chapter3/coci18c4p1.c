#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);

int main(void) {
    char winners[101];
    int n;

    scanf("%c\n%d\n", &winners[0], &n);

    char* p = winners;
    char winner = *p;
    char duel[4];
    int count = 1;

    
    for (int i = 0; i < n; i++) {
        read_line(duel, 4);
        if (duel[2] == winner) {
            winner = duel[0];
            if (!strrchr(winners, winner)) {
                count++;
                *++p = winner;
            }
        }
    }
    
    printf("%c\n%d\n", winner, count);
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
