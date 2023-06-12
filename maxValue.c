#include <stdio.h>

int maxValue(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", maxValue(a, b));
    }
    return 0;
}
