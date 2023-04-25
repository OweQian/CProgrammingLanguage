#include <stdio.h>
int n;
int a[10000001], x;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i, x;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        scanf("%d", &x);
        for (i = 0; i < n + 1; ++i) {
            swap(&x, &a[i]);
        }
        for (i = 0; i < n + 1; ++i) {
            if (i) {
                printf(" ");
            }
            printf("%d", a[i]);
        }
        printf("\n");
    }
    return 0;
}