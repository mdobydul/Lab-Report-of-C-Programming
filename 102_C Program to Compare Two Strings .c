#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int cmp = strcmp(str1, str2);

    if(cmp == 0)
        printf("Strings are equal\n");
    else if(cmp < 0)
        printf("First string is smaller\n");
    else
        printf("First string is greater\n");

    return 0;
}
