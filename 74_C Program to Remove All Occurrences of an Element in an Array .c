#include <stdio.h>

int main() {
    int n, i, key, j = 0;

    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int result[n];
    for(i = 0; i < n; i++) {
        if(arr[i] != key) {
            result[j++] = arr[i];
        }
    }

    for(i = 0; i < j; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
