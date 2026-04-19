#include <stdio.h>

//函数: 计算死亡率
double aaa(double a, double b) {
    double aa = b/a;
    return aa*100;
}

int main () {
    //确诊数a, 死亡数b
    double a = 0, b = 0;
    scanf("%lf %lf", &a, &b);
    printf("%lf%%", aaa(a, b));    //引用aaa函数
    return 0;
}