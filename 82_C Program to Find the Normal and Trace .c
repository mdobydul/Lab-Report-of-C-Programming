#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    double norm = 0;
    int trace = 0;

    scanf("%d", &n);
    int mat[n][n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < n; i++) {
        trace += mat[i][i];
        for(j = 0; j < n; j++) {
            norm += mat[i][j] * mat[i][j];
        }
    }

    norm = sqrt(norm);

    printf("Trace = %d\n", trace);
    printf("Norm = %.2f\n", norm);

    return 0;
}

