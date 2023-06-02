#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
}pt[1000010]; // 定义结构体，数组 pt，存储 1000010 个 Point 结构体的点

void input(int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &pt[i].x, &pt[i].y);
    }
}

void output(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", &pt[i].x, &pt[i].y);
    }
}

// 通用比较函数
int cmp(const void* a, const void* b) {
    const struct Point *pa = (const struct Point *)a; // 强制类型转换
    const struct Point *pb = (const struct Point *)b;
    if (pa->x == pb->x){
        return pa->y <= pb->y ? -1 : 1;
    };
    return pa->x < pb->x ? -1 : 1;
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        input(n);
        qsort(&pt[0], n, sizeof(pt[0]), cmp);
        output(n);
    }
    return 0;
}

