#include <stdio.h>
int stack[1000], top;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        top = 0;
        while(n) {
            stack[top++] = n % 10;
            n /= 10;
        }
        while(top) {
            printf("%d", stack[--top]);
            printf("%c", top == 0 ? '\n' : ',');
        }
    }
    return 0;
}
