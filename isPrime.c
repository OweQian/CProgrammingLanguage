#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % 2 == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%s\n", is_prime(n) ? "yes" : "no");
    }
    return 0;
}