#include <stdio.h>
#define PI 3.14

//函数 求球的体积
double volumeRound(double a) {
    return 4.0/3.0 * PI * a*a*a;
}

int main() {
    double a;
    scanf("%lf %lf", &a);
    printf("%.5lf", volumeRound(a));
    return 0;
}
