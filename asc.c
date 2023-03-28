#include <stdio.h>

int isLowerCase(char c) {
    return c >= 'a' && c <= 'z';
}

char getUpperCase(char c) {
    return c - 'a' + 'A';
}

int main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        if (isLowerCase(c)) {
            c = getUpperCase(c);
        }
        printf("%c\n", c);
    }
    return 0;
}