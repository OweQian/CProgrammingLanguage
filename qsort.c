#include <stdio.h>
#include <stdlib.h>

int a[200010];

void input(int n) {
    int i;
    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }    
}

void output(int n) {
    int i;
    for(i = 0; i < n; ++i) {
        if(i) {
            printf(" ");
        }
        printf("%d", a[i]);
    }    
    puts("");
}

int cmp(const void* a, const void* b) {
    return *(int *)a <= *(int *)b ? -1 : 1;    
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        input(n);
        qsort(&a[0], n, sizeof(a[0]), cmp);  // (1)
        output(n);
    }
}
