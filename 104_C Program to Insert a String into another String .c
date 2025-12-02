#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100], result[300];
    int pos, i, j, k = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    // Copy characters from str1 up to position
    for(i = 0; i < pos && str1[i] != '\0'; i++)
        result[k++] = str1[i];

    // Copy all characters of str2
    for(j = 0; str2[j] != '\0'; j++)
        result[k++] = str2[j];

    // Copy remaining characters of str1
    for(; str1[i] != '\0'; i++)
        result[k++] = str1[i];

    result[k] = '\0';

    printf("Resulting string: %s\n", result);

    return 0;
}
