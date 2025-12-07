#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter a & b values: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("Before swap a=%d, b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap a=%d, b=%d\n", a, b);
    return 0;
}
