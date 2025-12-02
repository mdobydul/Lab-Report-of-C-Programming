#include <stdio.h>

int main() {
    int rows, cols, i, j, k, temp;

    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols - 1; j++) {
            for(k = j + 1; k < cols; k++) {
                if(arr[i][j] > arr[i][k]) {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
