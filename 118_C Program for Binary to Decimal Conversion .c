#include <stdio.h>
#include <math.h>

int main() {
    long binary;
    int decimal = 0, rem, i = 0;

    scanf("%ld", &binary);

    while(binary > 0) {
        rem = binary % 10;
        decimal += rem * (1 << i); // 2^i
        binary = binary / 10;
        i++;
    }

    printf("%d\n", decimal);

    return 0;
}
