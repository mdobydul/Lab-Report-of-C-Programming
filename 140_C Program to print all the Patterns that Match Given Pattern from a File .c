#include <stdio.h>
#include <string.h>

int main() {
    char filename[100], pattern[100], line[200];
    scanf("%s %s", filename, pattern);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while(fgets(line, sizeof(line), fp)) {
        if(strstr(line, pattern)) // check if pattern exists in line
            printf("%s", line);
    }

    fclose(fp);
    return 0;
}
