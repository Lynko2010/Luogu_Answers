#include <stdio.h>
int main() {
    int x, a, y, b;
    scanf("%d%d%d%d", &x, &a, &y, &b);
    double z = (x*a - y*b)/(a-b);
    printf("%.2f", z);
    return 0;
}