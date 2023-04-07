#include <stdio.h>

int main() {
    int a;
    while (scanf("%d", &a) != EOF) {
        while (a) {
            printf("%d", a % 10);
            a /= 10;
        }
        printf("\n");
    }
    return 0;
}