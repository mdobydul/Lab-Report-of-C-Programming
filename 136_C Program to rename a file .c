#include <stdio.h>

int main() {
    char oldName[100], newName[100];
    scanf("%s %s", oldName, newName);

    if(rename(oldName, newName) == 0)
        printf("File renamed successfully.\n");
    else
        printf("Error renaming file.\n");

    return 0;
}
