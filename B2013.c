//利用公式 C=5×(F−32)/9 ( 其中 C 表示摄氏温度，F 表示华氏温度）进行计算转化，输入华氏温度 F，输出摄氏温度 C，要求精确到小数点后 5 位。
//输入华氏度, 输出摄氏度

#include <stdio.h>

//计算华氏度转摄氏度函数
double fc(double a) {
    return 5*(a-32)/9;
}

int main() {
    double aa;
    scanf("%lf",&aa);
    printf("%.5lf", fc(aa));
    return 0;
}