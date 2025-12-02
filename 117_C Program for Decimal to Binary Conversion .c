#include <stdio.h>

int main() {
    int dec, bin[32], i = 0;

    scanf("%d", &dec);

    if(dec == 0) {
        printf("0\n");
        return 0;
    }

    while(dec > 0) {
        bin[i] = dec % 2;
        dec = dec / 2;
        i++;
    }

    for(i = i - 1; i >= 0; i--)
        printf("%d", bin[i]);

    printf("\n");

    return 0;
}
