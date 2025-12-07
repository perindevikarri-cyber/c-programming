#include <stdio.h>

int main(void) {
    int a, b, c, d, e, total;
    float avg;
    printf("Enter five subject marks (integers): ");
    if (scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != 5) return 1;
    total = a + b + c + d + e;
    avg = total / 5.0f;
    printf("Total = %d\n", total);
    printf("Avg = %.2f\n", avg);
    return 0;
}
