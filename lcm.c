#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    while(1) {
        if (scanf("%d%d", &a, &b) != EOF) {
            printf("%d\n", a / gcd(a, b) * b);
        }
    }
    return 0;
}