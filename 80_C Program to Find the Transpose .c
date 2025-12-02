#include <stdio.h>

int main() {
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);
    int mat[rows][cols], trans[cols][rows];

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            trans[j][i] = mat[i][j];

    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}
