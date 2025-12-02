#include <stdio.h>

int main() {
    int rows, cols, i, temp;

    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];

    for(i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    for(int j = 0; j < cols; j++) {
        temp = mat[0][j];
        mat[0][j] = mat[rows - 1][j];
        mat[rows - 1][j] = temp;
    }

    for(i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
