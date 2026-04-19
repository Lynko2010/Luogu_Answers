#include <stdio.h>
#define PI 3.14159
double ZJ(double a) {
    return 2*a;
}

double ZC(double a) {
    return 2*PI*a;
}

double MJ(double a) {
    return PI*a*a;
}

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.4lf %.4lf %.4lf", ZJ(r), ZC(r), MJ(r));
    return 0; 
}