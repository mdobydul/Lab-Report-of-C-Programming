#include <stdio.h>

int main() {
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                printf("%d ", mat[i][j]);
            else
                printf("  "); // for spacing
        }
        printf("\n");
    }

    return 0;
}
