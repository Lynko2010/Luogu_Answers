#include <stdio.h>
double dz(double a, double b) {
    double c;
    return 1/(1/a+1/b);
}
int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.2lf", dz(a, b));
    return 0;
}