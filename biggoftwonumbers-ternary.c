#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter a & b values: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    int big = (a > b) ? a : b;
    printf("%d is big\n", big);
    return 0;
}
