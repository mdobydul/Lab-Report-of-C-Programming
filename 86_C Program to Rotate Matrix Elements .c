#include <stdio.h>

int main() {
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);
    int mat[rows][cols], temp;

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    int prev = mat[0][0];

    for(j = 0; j < cols; j++) {
        int curr = mat[0][j];
        mat[0][j] = prev;
        prev = curr;
    }

    for(i = 1; i < rows; i++) {
        int curr = mat[i][cols - 1];
        mat[i][cols - 1] = prev;
        prev = curr;
    }

    for(j = cols - 2; j >= 0; j--) {
        int curr = mat[rows - 1][j];
        mat[rows - 1][j] = prev;
        prev = curr;
    }

    for(i = rows - 2; i > 0; i--) {
        int curr = mat[i][0];
        mat[i][0] = prev;
        prev = curr;
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
