#include <stdio.h>
#include <math.h>

int main(void) {
    double P, R, T, CI;
    printf("Enter P R T values: ");
    if (scanf("%lf %lf %lf", &P, &R, &T) != 3) return 1;
    CI = P * (pow(1.0 + R/100.0, T) - 1.0);
    printf("Compound interest = %.2lf\n", CI);
    return 0;
}
