#include <stdio.h>

int main() {
    int n, d, i, j, temp;

    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &d); // number of rotations

    for(i = 0; i < d; i++) {
        temp = arr[n - 1];
        for(j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
