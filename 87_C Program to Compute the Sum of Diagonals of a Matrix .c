#include <stdio.h>

int main() {
    int n, i, j;
    int primary = 0, secondary = 0;

    scanf("%d", &n);
    int mat[n][n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < n; i++) {
        primary += mat[i][i];
        secondary += mat[i][n - 1 - i];
    }

    printf("Sum of primary diagonal = %d\n", primary);
    printf("Sum of secondary diagonal = %d\n", secondary);

    return 0;
}
