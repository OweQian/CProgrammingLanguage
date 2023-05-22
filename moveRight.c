#include <stdio.h>

int main() {
    int n, k;
    while (scanf("%d%d", &n, &k) != EOF) {
        int ans = n >> k & 1;
        printf("%d\n", ans);
    }
    return 0;
}