#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[50];
    long num;

    scanf("%s", str);

    num = atol(str);

    printf("%ld\n", num);

    return 0;
}
