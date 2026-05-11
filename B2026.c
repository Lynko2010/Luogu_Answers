#include <stdio.h>
#include <math.h>    //引用 math.h 数学库, 需要 fmod() 函数计算浮点数余数
int main() {
    double a;
    double b;
    scanf("%lf %lf", &a, &b);
    printf("%.4lf", fmod(a, b));    //使用 fmod() 函数计算浮点数a和浮点数b的余数, 并打印出来
    return 0;
}
