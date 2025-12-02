#include <stdio.h>

int main() {
    int n, i, j = 0;

    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result[n];
    result[j++] = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] != arr[i - 1]) {
            result[j++] = arr[i];
        }
    }

    for(i = 0; i < j; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
