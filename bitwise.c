#include <stdio.h>
int main() {
    int x;
    while( scanf("%d", &x) != EOF) {
        printf("%d\n", x | (x+1));  
    }
    return 0;
}
