#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, len;

    scanf("%s", str);
    len = strlen(str);

    for(i = 0; i < len; i++)
        freq[(int)str[i]]++;

    for(i = 0; i < len; i++) {
        if(freq[(int)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");
    return 0;
}
