#include <stdio.h>

int main() {
    int n, a, i;
    double avg;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; ++i) {
            scanf("%d", &a);
            avg += a;
        }
        printf("%.2lf\n", avg / n);
    }
    return 0;
}