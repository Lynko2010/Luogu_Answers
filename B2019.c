#include <stdio.h>
#include <stdbool.h>
int main() {
    int a;
    bool c;
    scanf("%d", &a);
    c = a;
    a = c;
    printf("%d", a);
    return 0;
}