#include <stdio.h>

int main() {
    int n, k;
    while (scanf("%d%d", &n, &k) != EOF) {
        int v = n & (1 << k);
        printf("%s\n", v ? "yes" : "no");
    }
    return 0;
}