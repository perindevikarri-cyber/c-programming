#include <stdio.h>
#include <math.h>

int main(void) {
    double x, s;
    printf("Enter any number: ");
    if (scanf("%lf", &x) != 1) return 1;
    if (x < 0) {
        printf("Square root of negative number is not supported here.\n");
    }
    s = sqrt(x);
    printf("Square root is = %.6f\n", s);
    return 0;
}
