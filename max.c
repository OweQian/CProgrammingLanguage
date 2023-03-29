#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n, a, i, maxv;
    while(scanf("%d", &n) != EOF) {
        for (i = 0; i < n; ++i) {
            scanf("%d", &a);
            if (i == 0) {
                maxv = a;
            }
            maxv = max(maxv, a);
        }
        printf("%d\n", maxv);
    }
    return 0;
}