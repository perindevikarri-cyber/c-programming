#include <stdio.h>

int main(void) {
    float c, f;
    printf("Enter C value: ");
    if (scanf("%f", &c) != 1) return 1;
    f = (1.8f * c) + 32.0f;
    printf("F = %.2f\n", f);
    return 0;
}
