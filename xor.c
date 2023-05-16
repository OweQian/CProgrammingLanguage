#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int missingNum = 0;
        for (int i = 1; i <= n - 1; i++) {
            int num;
            scanf("%d", &num);
            missingNum ^= num;
        }
        for (int i = 1; i <= n; i++) {
            missingNum ^= i;
        }
        printf("%d\n", missingNum);
    }
    return 0;
}
