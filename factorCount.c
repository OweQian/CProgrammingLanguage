#include <stdio.h>

int get_factor_count(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += i * i == n ? 1 : 2;
        }
    }
    return count;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int count = get_factor_count(n);
        printf("%d\n", count);
    }
    return 0;
}
