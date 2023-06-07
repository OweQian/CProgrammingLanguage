#include <stdio.h>

int main() {
    int n, a[1001];
    int target;
    int i;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        scanf("%d", &target);
        for (i = 0; i < n; i++) {
            if (a[i] == target) {
                break;
            }
        }
        printf("%s\n", i < n ? "yes" : "no");
    }
    
    return 0;
}