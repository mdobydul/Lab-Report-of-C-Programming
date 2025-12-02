#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char hex[50];
    int len, i, value = 0, base = 1;

    scanf("%s", hex);

    len = strlen(hex);

    for (i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9')
            value += (hex[i] - '0') * base;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            value += (hex[i] - 'A' + 10) * base;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            value += (hex[i] - 'a' + 10) * base;

        base = base * 1*
