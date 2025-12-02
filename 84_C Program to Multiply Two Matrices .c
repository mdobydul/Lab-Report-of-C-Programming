#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    if(c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int prod[r1][c2];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for(k = 0; k < c1; k++)
                prod[i][j] += mat1[i][k] * mat2[k][j];
        }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }

    return 0;
}
