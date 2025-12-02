#include <stdio.h>

const char* boolToString(int value) {
    if(value == 0)
        return "false";
    else
        return "true";
}

int main() {
    int b;

    scanf("%d", &b);

    printf("%s\n", boolToString(b));

    return 0;
}
