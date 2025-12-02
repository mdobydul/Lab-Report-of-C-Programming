#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int index;

    fgets(str, sizeof(str), stdin);

    printf("Enter the index: ");
    scanf("%d", &index);

    int len = strlen(str);
    if(str[len - 1] == '\n') str[len - 1] = '\0'; // remove newline

    if(index >= 0 && index < strlen(str))
        printf("Character at index %d: %c\nUnicode code point: %d\n", index, str[index], (int)str[index]);
    else
        printf("Invalid index\n");

    return 0;
}
