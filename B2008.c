#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int ride(int a, int b) {
    return a*b;
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", ride(add(a, b), c));
    return 0;
}