#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        int mask = 0;
        int temp = n;
        while (temp != 0) {
            temp = (temp >> 1);
            mask = (mask << 1) | 1;
        }
        printf("%d\n", n & (~mask));
    }
    return 0;
}