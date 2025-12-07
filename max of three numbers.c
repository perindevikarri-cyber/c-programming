#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter a b c values: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Max of three numbers is = %d\n", max);
    return 0;
}
