#include <stdio.h>

int main(void) {
    float P, R, T, SI;
    printf("Enter P R T values: ");
    if (scanf("%f %f %f", &P, &R, &T) != 3) return 1;
    SI = (P * R * T) / 100.0f;
    printf("Simple interest = %.2f\n", SI);
    return 0;
}
