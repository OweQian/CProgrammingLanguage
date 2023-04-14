#include <stdio.h>
#include <math.h>

int main() {
    int x, d, i, n, sum;
    while (scanf("%d%d", &x, &d) != EOF) {
        n = 0;
        sum = 0;
        while (d > 0) {
            sum += (d % 10) * pow(x, n);
            n++;
            d /= 10;
        }
        printf("%d\n", sum);
        
    }
    
    return 0;
}