#include <stdio.h>

void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        swap(&a, &b);
        printf("%d%d\n", a, b);
    }
    return 0;
}