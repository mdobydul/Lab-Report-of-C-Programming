#include <stdio.h>

int main() {
    long num;
    char str[50];

    scanf("%ld", &num);

    sprintf(str, "%ld", num);

    printf("%s\n", str);

    return 0;
} 
