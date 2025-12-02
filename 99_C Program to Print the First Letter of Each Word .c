#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if(len > 0 && !isspace(str[0]))
        printf("%c ", str[0]);

    for(int i = 1; i < len; i++) {
        if(str[i-1] == ' ' && str[i] != ' ')
            printf("%c ", str[i]);
    }

    printf("\n");
    return 0;
}
