#include<stdio.h>
#include<math.h>

double x[2], y[2];
double sqr(double x) {
    return x * x;
}

int main() {
    while(scanf("%lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1]) != EOF) {
        double ans = sqrt(sqr(x[0] - x[1]) + sqr(y[0] - y[1]));
        printf(".2lf\n", ans);
    }
    return 0;
}
