#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10, b = 20;
    int sum = a - b;
    printf("%d\n", sum);

    int x = 5, y = 0;

    FILE *fp = fopen("nonexistent.txt", "r");
    if(fp == NULL)
        perror("");

    return 0;
}
