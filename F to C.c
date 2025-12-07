#include <stdio.h>

int main(void) {
    float f, c;
    printf("Enter F value: ");
    if (scanf("%f", &f) != 1) return 1;
    c = (f - 32.0f) * 5.0f / 9.0f;
    printf("C = %.2f\n", c);
    return 0;
}
