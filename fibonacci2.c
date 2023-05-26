#include <stdio.h>

int main() {
    int n;
    int f[1000];
    while (scanf("%d", &n) != EOF) {
        f[0] = f[1] = 1;
        f[2] = 2;
        for (int i = 3; i <= n; i++) {
            f[i] = f[i - 1] + f[i - 2] + f[i - 3];
        }
        printf("%d\n", f[n]);
    }
    return 0;
}
