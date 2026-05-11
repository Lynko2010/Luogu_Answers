#include <stdio.h>
int main() {
    double db;
    scanf("%lf", &db);
    printf("%lf\n%.5lf\n%e\n%g\n", db, db, db, db);
    return 0;
}
