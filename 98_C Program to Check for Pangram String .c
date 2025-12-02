#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int i, flag = 1;
    int alpha[26] = {0};

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            alpha[index] = 1;
        }
    }

    for(i = 0; i < 26; i++) {
        if(alpha[i] == 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Pangram\n");
    else
        printf("Not Pangram\n");

    return 0;
}
