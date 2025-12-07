#include <stdio.h>

int main(void) {
    int seconds;
    printf("Enter seconds: ");
    if (scanf("%d", &seconds) != 1) return 1;
    int h = seconds / 3600;
    int m = (seconds % 3600) / 60;
    int s = seconds % 60;
    printf("H:M:S - %d:%d:%d\n", h, m, s);
    return 0;
}
