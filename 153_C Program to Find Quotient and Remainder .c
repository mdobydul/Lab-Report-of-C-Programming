#include <stdio.h>

int main() {
    int dividend, divisor;
    scanf("%d %d", &dividend, &divisor);

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
