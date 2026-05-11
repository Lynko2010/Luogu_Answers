#include <stdio.h>
int main() {
    char ch;
    int i;
    float fl;
    double db;
    scanf("%c\n %d\n %f\n %lf", &ch, &i, &fl, &db);
    printf("%c %d %.6f %.6lf", ch, i, fl, db);
    return 0;
}
