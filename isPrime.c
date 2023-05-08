#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
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