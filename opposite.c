#include <stdio.h>

int main() {
    int x;
    while(scanf("%d", &x) != EOF) {
        int opposite = ~x + 1;
        printf("%d\n", opposite);
    }
    return 0;
}