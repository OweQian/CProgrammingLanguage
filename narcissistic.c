#include <stdio.h>

int is_narcissistic(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int l, r;
    while (1) {
        if (scanf("%d%d", &l, &r) != EOF) {
            int found = 0;
            int i;
            for (i = l; i <= r; ++i) {
                if (is_narcissistic(i)) {
                    printf("%d", i);
                    found = 1;
                }
            }
            if (!found) {
                printf("no");
            }
            printf("\n");
        }
    }
    return 0;
}