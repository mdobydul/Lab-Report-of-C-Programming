#include <stdio.h>

int main() {
    int dec, oct[50], i = 0;

    scanf("%d", &dec);

    while (dec > 0) {
        oct[i] = dec % 8;
        dec = dec / 8;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
        printf("%d", oct[i]);

    printf("\n");

    return 0;
}
