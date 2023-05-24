#include <stdio.h>

int main() {
    int x, y;
    while (scanf("%d%d", &x, &y) != EOF) {
        int z = (x >> (y - 1)) & 1; // 获取第 y 位的值
        z <<= 1; // 将值左移一位，变成第 y + 1 位的值
        printf("%d\n", z);
    }
    return 0;
}