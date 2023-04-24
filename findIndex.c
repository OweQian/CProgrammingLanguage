#include <stdio.h>
int n;
int a[10000001];

int findIndex(int size, int a[], int value) {
    int i;
    for (i = 0; i < size; ++i) {
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int i, x;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        scanf("%d", &x);
        printf("%d\n", findIndex(n, a, x));
    }
    
    return 0;
}