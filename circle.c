#include <stdio.h>
#include <math.h>

const double PI = acos(-1.0);

int main() {
    double r;
    while (scanf("%lf", &r) != EOF) {
        double c = 2 * PI * r;
        double s = PI * r * r;
        printf("%lf %lf\n", c, s);
    }
    return 0;
}