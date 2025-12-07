
#include <stdio.h>

int main()
{
    int d, m, y, sum, lucky;
    printf("Enter your dd/mm/year:");
    scanf("%d%d%d", &d, &m, &y);
    sum = d + m + y;
    lucky = sum % 9;
    printf("Your Lucky Number is = %d", lucky);
    return 0;
}
