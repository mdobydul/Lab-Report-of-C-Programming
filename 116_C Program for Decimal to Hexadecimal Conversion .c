#include <stdio.h>

int main() {
    int dec, rem;
    char hex[50];
    int i = 0;

    scanf("%d", &dec);

    while(dec > 0) {
        rem = dec % 16;
        if(rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';
        i++;
        dec = dec / 16;
    }

    for(i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);

    printf("\n");

    return 0;
}
