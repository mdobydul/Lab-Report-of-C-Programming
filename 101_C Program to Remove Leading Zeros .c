#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int i = 0;
    while(str[i] == '0') i++;

    if(str[i] == '\0') // if all zeros
        printf("0\n");
    else
        printf("%s\n", &str[i]);

    return 0;
}
