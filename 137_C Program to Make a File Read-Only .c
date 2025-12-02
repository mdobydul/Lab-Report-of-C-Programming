#include <stdio.h>
#include <sys/stat.h>

int main() {
    char filename[100];
    scanf("%s", filename);

    if(chmod(filename, S_IRUSR | S_IRGRP | S_IROTH) == 0)
        printf("File is now read-only.\n");
    else
        printf("Error setting file to read-only.\n");

    return 0;
}
