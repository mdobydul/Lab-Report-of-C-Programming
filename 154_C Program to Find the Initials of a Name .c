#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if(name[len-1] == '\n') name[len-1] = '\0';

    if(name[0] != ' ')
        printf("%c", toupper(name[0]));

    for(int i = 0; i < len; i++) {
        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c", toupper(name[i+1]));
    }

    printf("\n");
    return 0;
}
