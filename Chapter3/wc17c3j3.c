#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101

void check_password(char password[]);
int check_letter(char letter, char* arr);
int read_line(char str[], int n);

char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char digits[] = "0123456789";

int main(void) {
    char password[MAX_LENGTH];
    read_line(password, MAX_LENGTH);
    check_password(password);
    return 0;
}

void check_password(char password[]) {
    int length = strlen(password);

    if (length < 8 || length > 12) {
        printf("Invalid");
        return;
    }

    int lc = 0, uc = 0, d = 0, i = 0;

    while (i < length) {
        if (check_letter(password[i], lowercase)) {
            lc++;
        } else if (check_letter(password[i], uppercase)) {
            uc++;
        } else if (check_letter(password[i], digits)) {
            d++;
        } else {
            printf("Invalid");
            return;
        }
        i++;
    }

    if (lc >= 3 && uc >=2 && d >= 1) {
        printf("Valid");
        return;
    } else {
        printf("Invalid");
        return;
    }

}

int check_letter(char letter, char* arr) {
    while (*arr != '\0') {
        if (letter == *arr) {
            return 1;
        }
        arr++;
    }
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