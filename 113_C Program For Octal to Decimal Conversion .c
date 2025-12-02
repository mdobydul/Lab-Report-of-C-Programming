#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, base = 1, rem;

    scanf("%d", &octal);

    while (octal > 0) {
        rem = octal % 10;
        decimal = decimal + rem * base;
        base = base * 8;
        octal = octal / 10;
    }

    printf("%d\n", decimal);

    return 0;
}
