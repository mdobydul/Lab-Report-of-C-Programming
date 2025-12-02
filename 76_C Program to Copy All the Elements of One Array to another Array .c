#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
    int arr1[n], arr2[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    for(i = 0; i < n; i++)
        arr2[i] = arr1[i];

    for(i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}
