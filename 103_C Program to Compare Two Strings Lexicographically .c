#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i;

    scanf("%s", str1);
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if(str1[i] != str2[i])
            break;
    }

    if(str1[i] == str2[i])
        printf("Strings are equal\n");
    else if(str1[i] < str2[i])
        printf("First string is lexicographically smaller\n");
    else
        printf("First string is lexicographically greater\n");

    return 0;
}
