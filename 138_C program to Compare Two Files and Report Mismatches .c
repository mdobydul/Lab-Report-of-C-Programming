#include <stdio.h>

int main() {
    char file1[100], file2[100];
    scanf("%s %s", file1, file2);

    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");

    if(fp1 == NULL || fp2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char ch1, ch2;
    int pos = 0, mismatch = 0;

    while(1) {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        pos++;

        if(ch1 == EOF && ch2 == EOF) break;

        if(ch1 != ch2) {
            mismatch++;
            printf("Mismatch at position %d: %c vs %c\n", pos, ch1, ch2);
        }
    }

    if(mismatch == 0)
        printf("Files are identical.\n");

    fclose(fp1);
    fclose(fp2);
    return 0;
}
