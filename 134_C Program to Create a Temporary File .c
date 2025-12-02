#include <stdio.h>

int main() {
    FILE *fp = tmpfile(); // Create a temporary file
    if(fp == NULL) {
        printf("Unable to create temporary file.\n");
        return 1;
    }

    // Write data to the temporary file
    fprintf(fp, "Hello, this is a temporary file.\n");
    fprintf(fp, "It will be deleted automatically when closed.\n");

    // Rewind and read the data back
    rewind(fp);
    char str[100];
    while(fgets(str, sizeof(str), fp) != NULL)
        printf("%s", str);

    fclose(fp); // Temporary file is deleted automatically
    return 0;
}
