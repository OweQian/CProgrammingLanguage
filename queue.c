#include <stdio.h>
int queue[1000], front, rear;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        front = rear = 0;
        while(n) {
            stack[rear++] = n % 10;
            n /= 10;
        }
        while(front < rear) {
            printf("%d", stack[front++]);
        }
        printf("\n");
    }
    return 0;
}
