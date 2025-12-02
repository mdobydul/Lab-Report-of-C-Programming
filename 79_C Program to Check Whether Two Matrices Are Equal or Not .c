#include <stdio.h>

int main() {
    int rows, cols, i, j, equal = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat2[i][j]);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(mat1[i][j] != mat2[i][j]) {
                equal = 0;
                break;
            }
        }
        if(equal == 0) break;
    }

    if(equal)
        printf("The two matrices are equal.\n");
    else
        printf("The two matrices are not equal.\n");

    return 0;
}
