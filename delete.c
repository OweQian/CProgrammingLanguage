#include <stdio.h>
int n;
int a[10000001], x;

int main() {
    int i, x;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        for (i = 1; i < n; ++i) {
            a[i - 1] = a[i];
        }
        for (i = 0; i < n - 1; ++i) {
            if (i) {
                printf(" ");
            }
            printf("%d", a[i]);
        }
        printf("\n");
    }
    return 0;
}