#include <stdio.h>

int main() {
    int rows, cols, i, temp;

    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];

    for(i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < rows; i++) {
        temp = mat[i][0];
        mat[i][0] = mat[i][cols - 1];
        mat[i][cols - 1] = temp;
    }

    for(i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
