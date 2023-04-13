#include <stdio.h>

int monthday[] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int sumday[13];
int y, m, d;

int main() {
    int i;
    while (1) {
        if (scanf("%4d/%2d/%2d", &y, &m, &d) == 3) {
            monthday[2] = y % 4 == 0 && y % 100 || y % 400 == 0 ? 29 : 28;
            sumday[0] = 0;
            for (i = 1; i <= 12; ++i) {
                sumday[i] = sumday[i - 1] + monthday[i];
            }
            int ans = sumday[m - 1] + d;
            printf("%d\n", ans);
        }
    }
    return 0;
}