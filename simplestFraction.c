#include <stdio.h>

int gcd (int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    while(1) {
        if (scanf("%d%d", &a, &b) != EOF) {
            int g = gcd(a, b);
            printf("%d%d\n", a/g, b/g);
        }
    }
    return 0;
}