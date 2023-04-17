#include <stdio.h>

char hex_chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

void print_base_x(int d, int x) {
    if (d == 0) return;
    print_base_x(d / x, x);
    printf("%c", hex_chars[d % x]);
}

int main() {
    int d, x;
    while (1) {
        if (scanf("%d%d", &d, &x) == 2) {
            if (d < 0) d = -d;
            print_base_x(d, x);
            printf("\n");
        }
    }
    
    return 0;
}